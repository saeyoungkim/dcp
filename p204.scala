/**
This problem was asked by Amazon.

Given a complete binary tree, count the number of nodes in faster than O(n) time. Recall that a complete binary tree has every level filled except the last, and the nodes in the last level are filled starting from the left.
*/

case class TreeNode(_x: Int, _left: TreeNode = null, _right: TreeNode = null) {
    var x = _x
    var left = _left
    var right = _right
}

object P204 extends App {
    val root = TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5)), TreeNode(3, TreeNode(6), TreeNode(7)))

    def getLevel(root: TreeNode): Int = if(root == null) 0 else 1 + getLevel(root.left)
    
    val level = getLevel(root)

    var l = 1
    var r = (1 << (level-1))
    var lev = level-1

    def existLeaf(_m: Int, _lev: Int, _r: TreeNode): Boolean = {
        var mid = _m
        var lev = _lev
        var root = _r

        while(lev > 0 && root != null) {
            var halfCount = 1 << (lev-1)
            
            if(mid > halfCount) {
                root = root.right
                mid -= halfCount
            } else
                root = root.left
            
            lev -= 1
        }

        root != null
    }

    while(l <= r) {
        var mid = l + ((r-l) >> 1)

        if(existLeaf(mid,lev, root))
            l = mid + 1
        else 
            r = mid - 1
    }

    if(r == (1 << lev)) 
        println((1 << level) - 1)
    else 
        println((1 << lev) - 1 + r)
}