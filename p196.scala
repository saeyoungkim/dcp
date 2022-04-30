/**
This problem was asked by Apple.

Given the root of a binary tree, find the most frequent subtree sum. The subtree sum of a node is the sum of all values under a node, including the node itself.

For example, given the following tree:

  5
 / \
2  -5
Return 2 as it occurs twice: once as the left leaf, and once as the sum of 2 + 5 - 5.
*/

object P196 extends App {
    case class Node(_x: Int = 0, _left: Node = null, _right: Node = null) {
        var x = _x
        var left = _left
        var right = _right
    }

    val root = Node(5, Node(2), Node(-5))

    val memo = scala.collection.mutable.Map[Int,Int]().withDefaultValue(0)

    def sum(node: Node): Int = {
        if(node == null)
            0
        else {
            val res = node.x + sum(node.left) + sum(node.right)
            memo(res) += 1

            res
        }
    }

    sum(root)

    val ans = memo.foldLeft(0) { case (cand , (sum, count)) =>
        if(memo(cand) <= memo(sum)) {
            sum
        } else {
            cand
        }
    }

    println(ans)
}