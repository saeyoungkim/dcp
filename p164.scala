/**
This problem was asked by Google.

You are given an array of length n + 1 whose elements belong to the set {1, 2, ..., n}. By the pigeonhole principle, there must be a duplicate. Find it in linear time and space.
*/

object P164 extends App {
    val l = List(1,2,6,4,3,2,7,5)

    val nSum = (l.size * (l.size - 1)) >> 1

    println(l.sum - nSum)
}