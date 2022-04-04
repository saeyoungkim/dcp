/**
This problem was asked by Amazon.

You are given a list of data entries that represent entries and exits of groups of people into a building. An entry looks like this:

{"timestamp": 1526579928, count: 3, "type": "enter"}

This means 3 people entered the building. An exit looks like this:

{"timestamp": 1526580382, count: 2, "type": "exit"}

This means that 2 people exited the building. timestamp is in Unix time.

Find the busiest period in the building, that is, the time with the most people in the building. Return it as a pair of (start, end) timestamps. You can assume the building always starts off and ends up empty, i.e. with 0 people inside.
*/

object P171 extends App {
    val l: List[(Long, Int, String)] = List((1526579928, 3, "enter"), (1526579982, 4, "enter"), (1526580054, 5, "exit"), (1526580128, 1, "enter"), (1526580382, 3, "exit"))

    def compare(a: (Long, Int, String), b: (Long, Int, String)): Boolean = a._1 < b._1

    val sortedL = l.sortWith(compare)

    var curr = 0
    var maximum = 0

    var startTime: Long = 0
    var endTime: Long = 0

    for((timestamp, count, t) <- l) {
        if(t == "enter") {
            curr = curr + count
            if(maximum < curr) {
                maximum = curr
                startTime = timestamp
            }
        } else if(t == "exit") {
            if(curr == maximum) {
                curr = curr - count
                endTime = timestamp
            }
        }
    }

    println(s"[ $startTime , $endTime ]")
}