/**
Given ranges example: [[2,4], [4,100], [1,10], ....]
Generate numbers from these ranges such that it will take one number from each range.

Example solution for above: 2569 (2 from first range, 56 from second range, 9 from 3rd range)
*/

object NumberFromRanges extends App {
    val arrs = Array(Array(2,4), Array(4,100), Array(1,10))

    val sb = new StringBuilder()

    val r = new scala.util.Random()

    for(arr <- arrs) {
        val diff = arr(1) - arr(0) + 1
        sb ++= (arr(0) + r.nextInt(diff)).toString
    }

    println(sb.result)
}