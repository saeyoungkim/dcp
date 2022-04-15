/**
Given a Tree Node representation for a regular expression, we consider the following cases:
// 'CHAR' a : matches only a, and not aa
// 'DISJ' a|b : matches a or b
// 'REP' a*: matches empty string or a or aa or aaa...
// 'CONCAT' a(b) : matches ab

Example: a(a|b)* valid examples: a, ab, aa, aab, aba, aaaaa, abbbb, ...

Represented in this tree:

                  CONCAT
               /         \
      CHAR (a)           REP
                         /
                     DISJ
                   /        \
                CHAR a    CHAR b
Provided the followng Class Node

enum Type {
    CHAR,
    DISJ,
    REP,
    CONCAT
}

static class Node {
    Type type;
    Node left; 
    Node right; 
    char c;
}
Impleent the Match method

    public static boolean isMatch(String s, Node n) {
    }
*/

sealed trait Type

case object CHAR extends Type
case object DISJ extends Type
case object REP extends Type
case object CONCAT extends Type

case class Node(_t: Type = CHAR, _l: Node = null, _r: Node = null, _c: Char = 'a') {
    var t = _t
    var left = _l
    var right = _r
    var c = _c
}

object RegularExpressionTree extends App {
    val str = scala.io.StdIn.readLine

    val node = Node(CONCAT, Node(CHAR, null, null, 'a'), Node(REP, Node(DISJ, Node(CHAR, null, null, 'a'), Node(CHAR, null, null, 'b'), 'a'), null, 'a'))

    def isMatch(str: String, node: Node): Boolean = {   
        val memo = scala.collection.mutable.Map[(String, Node), Boolean]()

        def _isMatch(str: String, node: Node): Boolean = {
            if(!memo.contains((str, node))) {
                val r = node.t match {
                    case CHAR => str == node.c.toString
                    case DISJ => isMatch(str, node.left) || isMatch(str, node.right)
                    case REP => {
                        Range.inclusive(0, str.length).exists { i =>
                            val prevSub = str.substring(0,i) // node . left
                            val afterSub = str.substring(i, str.length) // node

                            isMatch(prevSub, node.left) && (if(afterSub.isEmpty) true else isMatch(afterSub, node))
                        }
                    }
                    case CONCAT => {
                        // p1 p2 s 
                        // s.sbustring(0,0) p1 s.substring(1,s.length) p2
                        Range.inclusive(0, str.length).exists { i =>
                            isMatch(str.substring(0,i), node.left) && isMatch(str.substring(i, str.length), node.right)
                        }
                    }
                }

                memo((str,node)) = r
            }

            memo((str,node))
        }

        _isMatch(str, node)
    }

    println(isMatch(str, node))
}