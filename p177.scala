/**
This problem was asked by Airbnb.

Given a linked list and a positive integer k, rotate the list to the right by k places.

For example, given the linked list 7 -> 7 -> 3 -> 5 and k = 2, it should become 3 -> 5 -> 7 -> 7.

Given the linked list 1 -> 2 -> 3 -> 4 -> 5 and k = 3, it should become 3 -> 4 -> 5 -> 1 -> 2.
*/

object P177 extends App {
    case class ListNode(_x: Int = -1, _next: ListNode = null) {
        var x  = _x
        var next = _next
    }

    val h1 = ListNode(7, ListNode(7, ListNode(3, ListNode(5))))
    val k1 = 2
    val h2 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
    val k2 = 3

    def rotate(head: ListNode, _k: Int): ListNode = {
        val dummy: ListNode = ListNode(-1, head)
        var prev = dummy.next
        var backTail = prev
        var k = _k
        while(k > 0 && backTail != null) {
            backTail = backTail.next
            k = k-1
        }

        while(backTail != null && backTail.next != null) {
            prev = prev.next;
            backTail = backTail.next;
        }

        backTail.next = dummy.next
        dummy.next = prev.next
        prev.next = null

        dummy.next
    }

    def printNode(n: ListNode): Unit = {
        if(n != null) {
            print(s"${n.x} ")
            printNode(n.next)
        } else 
            println()
    }

    val rotated1 = rotate(h1, k1)

    printNode(rotated1)
    

    val rotated2 = rotate(h2, k2)

    printNode(rotated2)
}