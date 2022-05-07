/**
Let X be a set of n intervals on the real line. We say that a set of points P "stabs" X if every interval in X contains at least one point in P. Compute the smallest set of points that stabs X.

For example, given the intervals [(1, 4), (4, 5), (7, 9), (9, 12)], you should return [4, 9].
*/

object P200 extends App {
    val intervals = Array(Array(1,4),Array(4,5),Array(7,9),Array(9,12))

    val sortedIntervals = intervals.sortWith((a: Array[Int], b: Array[Int]) => if(a(0) == b(0)) a(1) <= b(1) else a(0) <= b(0)).toList :+ Array(Int.MaxValue, Int.MaxValue)

    val ans = scala.collection.mutable.ListBuffer[Int]()

    var end = sortedIntervals(0)(1)

    for(i <- 1 until sortedIntervals.size) {
        if(end < sortedIntervals(i)(0)) {
            ans += end
            end = sortedIntervals(i)(1)
        } else {
            end = end min sortedIntervals(i)(1)
        }
    }

    println(ans)
}