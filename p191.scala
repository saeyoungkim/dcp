/**
This problem was asked by Stripe.

Given a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Intervals can "touch", such as [0, 1] and [1, 2], but they won't be considered overlapping.

For example, given the intervals (7, 9), (2, 4), (5, 8), return 1 as the last interval can be removed and the first two won't overlap.

The intervals are not necessarily sorted in any order.
*/

object P191 extends App {
    val seq = Seq((7, 9), (2, 4), (5, 8))

    val sortedIntervalsByStartTime = seq.sortWith((a: (Int, Int), b: (Int, Int)) => a._1 <= b._1)

    var lastTime = 0
    var ans = 0

    for(interval <- sortedIntervalsByStartTime) {
        val (startTime, endTime) = interval

        if(lastTime <= startTime) {
            lastTime = endTime
        } else {
            ans += 1
            lastTime = endTime min lastTime
        }
    }

    println(ans)
}