/**
This problem was asked by Facebook.

Suppose you are given two lists of n points, one list p1, p2, ..., pn on the line y = 0 and the other list q1, q2, ..., qn on the line y = 1.
Imagine a set of n line segments connecting each point pi to qi. 
Write an algorithm to determine how many pairs of the line segments intersect.
*/

object P194 extends App {
    val ps = List(5,9)
    val qs = List(15,7)

    val pqs = ps.zip(qs).sortWith((a: (Int,Int), b: (Int,Int)) => a._1 < b._1)

    val seen = scala.collection.mutable.TreeSet[(Int,Int)]()

    var count = 0
    for(i <- 0 until pqs.size) {
        count += seen.rangeFrom((pqs(i)._2, -1)).size

        println(seen)
    }

    println(count)
}