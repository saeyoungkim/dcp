/**
This problem was asked by Uber.

Given a tree where each edge has a weight, compute the length of the longest path in the tree.

For example, given the following tree:

   a
  /|\
 b c d
    / \
   e   f
  / \
 g   h
and the weights: a-b: 3, a-c: 5, a-d: 8, d-e: 2, d-f: 4, e-g: 1, e-h: 1, the longest path would be c -> a -> d -> f, with a length of 17.

The path does not have to pass through the root, and each node can have any amount of children.
*/

class Node(_ch: Char, _next: List[(Node, Int)] = Nil) {
    var ch: Char  = _ch
    var nexts: List[(Node,Int)] = _next
}

object P160 extends App {
    // left : longest path with line include node n , right : the longest path with subtree include n
    def dfs(n: Node): (Int,Int) = (
        if(n == null) {
            (0,0)
        } else {
            var firstLongestLineLen = Int.MinValue
            var secondLongestLineLen = Int.MinValue
            val results = n.nexts.map { case (next, weight) =>
                var (longestLineFromChild, longestPathFromChild) = dfs(next)

                longestLineFromChild = weight max (longestLineFromChild + weight)

                if(longestLineFromChild > firstLongestLineLen) {
                    secondLongestLineLen = firstLongestLineLen
                    firstLongestLineLen = longestLineFromChild
                }
                else if(longestLineFromChild > secondLongestLineLen) {
                    secondLongestLineLen = longestLineFromChild
                }

                (longestLineFromChild, longestPathFromChild)
            }

            // 1 the longest path from child
            // candidate 1 : longest Path From Child the node n is excluded 
            val longestPathLenWithoutNode = if(results.length > 0 ) results.maxBy(_._2)._2 else 0

            // candidate 2 : the longest Path from child is included the node n
            val longestPathLenWithNode =
                (if(firstLongestLineLen <= 0) 0 else firstLongestLineLen) + (if(secondLongestLineLen <= 0) 0 else secondLongestLineLen)
        
            (firstLongestLineLen, longestPathLenWithoutNode max longestPathLenWithNode)
        }
    )

    val root = new Node('a', List((new Node('b'), 3),(new Node('c'), 5),(new Node('d', List((new Node('e', List((new Node('g'), 1), (new Node('h'), 1))), 2),(new Node('f'), 4))),-1)))    

    val ans = dfs(root)

    println(ans._2)
}