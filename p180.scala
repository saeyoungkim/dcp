/**
This problem was asked by Google.

Given a stack of N elements, interleave the first half of the stack with the second half reversed using only one other queue. This should be done in-place.

Recall that you can only push or pop from a stack, and enqueue or dequeue from a queue.

For example, if the stack is [1, 2, 3, 4, 5], it should become [1, 5, 2, 4, 3]. If the stack is [1, 2, 3, 4], it should become [1, 4, 2, 3].

Hint: Try working backwards from the end state.
*/

object P180 extends App {
    val stk = scala.collection.mutable.Stack[Int](5,4,3,2,1)

    val q = scala.collection.mutable.Queue[Int]()

    stk.foreach(v => print(s"$v "))
    println()

    var i = 1
    while(i < stk.size) {
        while(stk.size > i) {
            q.enqueue(stk.pop())
        }

        while(!q.isEmpty) {
            stk.push(q.dequeue())
        }

        stk.foreach(v => print(s"$v "))
        println()

        i += 1
    }

    stk.foreach(v => print(s"$v "))
    println()
}