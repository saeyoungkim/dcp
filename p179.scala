/**
This problem was asked by Google.

Given the sequence of keys visited by a postorder traversal of a binary search tree, reconstruct the tree.

For example, given the sequence 2, 4, 3, 8, 7, 5, you should construct the following tree:

    5
   / \
  3   7
 / \   \
2   4   8
*/

object P179 extends App {
    val seq = Seq(2,4,3,8,7,5)

    case class Node(v: Int) {
        var value = v
        var left: Node = null
        var right: Node = null
    }

    var i = seq.size-1
    def createNode(l: Int = Int.MinValue, r: Int = Int.MaxValue): Node = {

        if(i < 0 || seq(i) <= l || seq(i) >= r)
            null
        else {
            val s = seq(i)
            val root = Node(seq(i))

            i -= 1

            root.right = createNode(s, r)
            root.left = createNode(l, s)

            root
        }
    }

    val root = createNode()

    def postOrder(root: Node): Unit = {
        if(root != null) {
            postOrder(root.left)
            postOrder(root.right)
            print(s"${root.value} ")
        }
    }

    postOrder(root)
}