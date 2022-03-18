/**
This problem was asked by Amazon.

Implement a stack API using only a heap. A stack implements the following methods:

push(item), which adds an element to the stack
pop(), which removes and returns the most recently added element (or throws an error if there is nothing on the stack)
Recall that a heap has the following operations:

push(item), which adds a new key to the heap
pop(), which removes and returns the max value of the heap
*/

object P154 extends App {
    case class Stack(pq: scala.collection.mutable.PriorityQueue[(Long,Int)] = scala.collection.mutable.PriorityQueue[(Long,Int)]()) {
        var i: Long = 0L
        def push(item: Int): Unit = {
            pq.enqueue((i, item))
            i += 1
        }

        def pop(): Int = {
            pq.dequeue()._2
        }
    }

    val s = Stack()

    s.push(5)
    s.push(10)
    s.push(8)
    s.push(-1)
    s.push(100)

    println(s.pop())
    println(s.pop())
    println(s.pop())
    println(s.pop())
    println(s.pop())
}