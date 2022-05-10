/**
Given array of building heights which are adjacent to each other, find the minimum number of posters to cover all the buildings.

P.S: The poster could be of any size(any Length * Width ). Also a poster should not be used to cover free/empty space. We just have to minimize the total number of posters.

Example1: [5,5,5]
Ans: 1 
Explanation: 1 poster of (5 X 3) size will cover all the buildings

--------

Example2: [5,2,5]
Ans: 3
Explanation: 
 > 1 poster of (2 X 3) size which makes the remaining uncovered parts to be [3,0,3]
 > Use 2 separate posters of (1 X 3) to cover the 2 remaining uncovered buildings.
*/

object MinimumPoster extends App {
    var ts = scala.collection.mutable.Stack[Int]()

    val heights = List(5,2,5)

    var count = 0

    for(height <- heights) {
        while(ts.nonEmpty && ts.top > height) {
            ts.pop()
        }

        if(ts.isEmpty || ts.top != height) {
            count += 1
            ts.push(height)
        }
    }

    println(count)
}