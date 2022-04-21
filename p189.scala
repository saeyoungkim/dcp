/**
This problem was asked by Google.

Given an array of elements, return the length of the longest subarray where all its elements are distinct.

For example, given the array [5, 1, 3, 5, 2, 3, 4, 1], return 5 as the longest subarray of distinct elements is [5, 2, 3, 4, 1].
*/

object P189 extends App {
    val l = List(5,1,3,5,2,3,4,1)

    def countMaxDistinctElements(l: List[Int]): Int = {
        // k1 ~ kx <- unique
        // if kx+1 exists in k1 ~ kx and the position is p
        // kp+1 ~ kx+1 is new array for check ( because k1 ~ kp cannot include kx+1)
        // else just k1 ~ kx+1

        val memo = scala.collection.mutable.Map[Int,Int]()

        var start = 0
        (l.zipWithIndex.map { case (num, idx) =>
            if(memo.contains(num) && start <= memo(num))
                start = memo(num) + 1
            
            memo += ((num -> idx))
            idx - start + 1
        }).max
    }

    println(countMaxDistinctElements(l))
}