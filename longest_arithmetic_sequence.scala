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

object LongestArithmeticProgressions extends App {
    // (max length from root which is left node) max (max length from root which is right node) max (max len from root)

    var ans = 1
    def getLongestArithmeticProgression(root: Node, diff: Int, count: Int): Unit = { // get longest length include root
        println(diff + " " + count)
        ans = ans max count

        if(root.left != null) {
            if(diff == root.x - root.left.x) {
                getLongestArithmeticProgression(root.left, diff, count+1)
            } else {
                getLongestArithmeticProgression(root.left, root.x - root.left.x, 1)
            }
        }

        if(root.right != null) {
            if(diff == root.x - root.right.x) {
                getLongestArithmeticProgression(root.right, diff, count+1)
            } else {
                getLongestArithmeticProgression(root.right, root.x - root.right.x, 1)
            }
        }
    }

    val root = Node(2, Node(0, Node(-2, Node(9), Node(-4)), Node(-2)), Node(4, Node(10), Node(6, Node(-1), Node(8))))

    if(root == null)
        println(0)
    else {
        if(root.left != null) getLongestArithmeticProgression(root.left, root.x - root.left.x, 2)
        if(root.right != null) getLongestArithmeticProgression(root.right, root.x - root.right.x, 2)

        println(ans)
    }
}