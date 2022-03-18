/**
This problem was asked by MongoDB.

Given a list of elements, find the majority element, which appears more than half the time (> floor(len(lst) / 2.0)).

You can assume that such element exists.

For example, given [1, 2, 1, 1, 3, 4, 0], return 1.
*/

object P155 extends App {
    val l = List(1,2,1,1,3,4,1)

    var ans = Int.MaxValue
    var count = 0

    for(v <- l) {
        if(count == 0) { ans = v; count += 1 }
        else if(ans == v) count += 1
        else if(count == 0) { ans = v; count = 1 }
        else count -= 1
    }

    println(ans)
}