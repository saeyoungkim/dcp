/**
This problem was asked by Google.

You are given given a list of rectangles represented by min and max x- and y-coordinates. Compute whether or not a pair of rectangles overlap each other. If one rectangle completely covers another, it is considered overlapping.

For example, given the following rectangles:

{
    "top_left": (1, 4),
    "dimensions": (3, 3) # width, height
},
{
    "top_left": (-1, 3),
    "dimensions": (2, 1)
},
{
    "top_left": (0, 5),
    "dimensions": (4, 3)
}
return true as the first and third rectangle overlap each other.
*/

object P187 extends App {
    // check the top_left or top_left + dimensions in other rectangle

    val seen = scala.collection.mutable.ListBuffer[Array[(Int,Int)]]()

    val points = List(Array((1,4),(3,3)), Array((-1,3),(2,1)), Array((0,5),(4,3)))

    def overrapRectangle(currRect: Array[(Int,Int)], rect: Array[(Int,Int)]): Boolean = {
        ((rect(0)._1 <= currRect(0)._1 && currRect(0)._1 < rect(0)._1 + rect(1)._1) || (rect(0)._1 < (currRect(0)._1 + currRect(1)._1) && (currRect(0)._1 + currRect(1)._1) <= rect(0)._1 + rect(1)._1)) &&
        ((rect(0)._2 >= currRect(0)._2 && currRect(0)._2 > rect(0)._2 - rect(1)._2) || (rect(0)._2 > (currRect(0)._2 - currRect(1)._2) && (currRect(0)._2 - currRect(1)._2) >= rect(0)._2 - rect(1)._2))
    }

    var answerFind = false
    for(rectangle <- points if !answerFind) {
        for(alreadyVisitedRectangle <- seen if !answerFind) {
            if(overrapRectangle(rectangle, alreadyVisitedRectangle)) {
                answerFind = true
            }
        }


        seen += rectangle
    }

    println(answerFind)
}