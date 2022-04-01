/**
This problem was asked by Google.

Given a linked list, sort it in O(n log n) time and constant space.

For example, the linked list 4 -> 1 -> -3 -> 99 should become -3 -> 1 -> 4 -> 99.
*/

object P169 extends App {
    case class Node(_value: Int = -1, _next: Node = null) {
        var value = _value
        var next = _next
    }

    val root = Node(4, Node(1, Node (-3, Node(99, Node(18, Node(7, Node(-12)))))))

    def len(r: Node): Int = if(r == null) 0 else 1 + len(r.next)

    def merge(a: Node, b: Node): Node = {
        var as = a
        var bs = b
        val st = Node(-1)
        var curr = st
        while(as != null || bs != null) {
            if(as == null) {
                curr.next = bs
                bs = bs.next
            } else if(bs == null) {
                curr.next = as
                as = as.next
            } else if(as.value <= bs.value) {
                curr.next = as
                as = as.next
            } else {
                curr.next = bs
                bs = bs.next
            }

            curr = curr.next
            
        }

        st.next
    }

    def sort(start: Node, len: Int): Node = {
        if(start != null && len > 1) {
            val halfLen = (len >> 1)
            var i = 0
            var prev: Node = null
            var nextStart = start
            while(i < halfLen) {
                i += 1
                prev = nextStart
                nextStart = nextStart.next
            }

            if(prev != null) prev.next = null

            val sortedStart = sort(start, halfLen)
            val sortedNextStart = sort(nextStart, len-halfLen)

            merge(sortedStart, sortedNextStart)
        } else start
    }

    var sorted = sort(root, len(root))

    while(sorted != null) {
        print(s"${sorted.value} ")
        sorted = sorted.next
    }
    println()
}