case class SegmentTree(arr: Array[Int]) {
    case class SegmentTreeNode(_st: Int = -1, _ed: Int = -1) {
        var start = _st
        var end = _ed
        var value = -1
        var left: SegmentTreeNode = null
        var right: SegmentTreeNode = null
    }

    val head = SegmentTreeNode()

    def build(st: Int = 0, ed: Int = arr.length-1, curr: SegmentTreeNode = this.head): Unit = {
        curr.start = st
        curr.end = ed
        if(st == ed) {
            curr.value = arr(st)
        } else {
            val mid = st + ((ed-st) >> 1)
            curr.left = SegmentTreeNode()
            curr.right = SegmentTreeNode()
            build(st, mid, curr.left)
            build(mid+1, ed, curr.right)

            curr.value = curr.left.value min curr.right.value
        }
    }

    def find(st: Int, ed: Int, curr: SegmentTreeNode = this.head): Int = {
        val mid = curr.start + ((curr.end - curr.start) >> 1)

        if(curr.start == curr.end)
            curr.value
        else if(ed <= mid)
            find(st, ed, curr.left)
        else if(st > mid)
            find(st, ed, curr.right)
        else
            find(st, mid, curr.left) min find(mid+1, ed, curr.right)
    }
}

object Main extends App {
    val arr = Array(1,6,4,2,8,20,1,-5,3,7,5,12,66,23,43,-16,35)
    val st = SegmentTree(arr)
    st.build()

    for {
        i <- 0 until arr.length
        j <- i until arr.length
    } {
        print(s"${st.find(i,j)} ")
        if(j == arr.length-1) println()
    }
}