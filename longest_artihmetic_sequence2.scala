/**
Given a binary tree, return the maximum length of the path which is a valid arithmatic progression sequence. A path in the tree starts at the root node and ends at the leaf node. Tree can have multiple valid arithmatic progression sequence paths, return the max length of all.

          2
       /     \
      0       4
    /   \   /    \
  -2    -2 10      6
 /   \           /   \
9    -4         -1    8

Valid AP paths - 2 0 -2 -4
Valid AP paths - 2 0 -2
Valid AP paths - 2 4 6 8

max_len = 4
*/

case class Node(_x: Int = 0, _l: Node = null, _r: Node = null) {
    var x = _x
    var left = _l
    var right = _r
}

object LongestArithmeticProgressions2 extends App {
    // (max length from root which is left node) max (max length from root which is right node) max (max len from root)

    def getLongestArithmeticProgression(root: Node, diff: Option[Int] = None): Int = { // get longest length include root
        if(root == null)
            0
        else if(root.left == null && root.right == null)
            1
        else {
            var ans = -1
            if(root.left != null) {
                diff match {
                    case Some(_diff) if root.x - root.left.x != _diff => {}
                    case _ => {
                        val d = getLongestArithmeticProgression(root.left, Some(root.x - root.left.x))
                        if(d != -1)
                            ans = ans max (1+d)
                    }
                }
            }

            if(root.right != null) {
                diff match {
                    case Some(_diff) if root.x - root.right.x != _diff => {}
                    case _ => {
                        val d = getLongestArithmeticProgression(root.left, Some(root.x - root.right.x))
                        if(d != -1)
                            ans = ans max (1+d)
                    }
                }
            }

            ans
        }
    }

    val root = Node(2, Node(0, Node(-2, Node(9), Node(-4)), Node(-2)), Node(4, Node(10), Node(6, Node(-1), Node(8))))

    println(getLongestArithmeticProgression(root))
}