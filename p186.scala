/**
This problem was asked by Microsoft.

Given an array of positive integers, divide the array into two subsets such that the difference between the sum of the subsets is as small as possible.

For example, given [5, 10, 15, 20, 25], return the sets {10, 25} and {5, 15, 20}, which has a difference of 5, which is the smallest possible difference.
*/

object P186 extends App {
    val arr = Array(5,10,15,20,25)

    val halfSum = (arr.sum >> 1)

    var ansIndexs = 0
    var nearestToHalfSum = 0
    for(i <- 0 until (1 << arr.size)) {
        var j = i
        var sumOfSet = 0
        var idx = 0
        while(j > 0) {
            if((j&1) == 1)
                sumOfSet += arr(idx)
            j >>= 1
            idx += 1
        }

        if(scala.math.abs(halfSum - nearestToHalfSum) > scala.math.abs(halfSum - sumOfSet)) {
            nearestToHalfSum = sumOfSet
            ansIndexs = i
        }
    }

    val s1 = scala.collection.mutable.ArrayBuffer[Int]()

    var idx = 0
    while(ansIndexs > 0) {
        if((ansIndexs & 1) == 1) 
            s1 += idx

        ansIndexs >>= 1
        idx += 1
    }

    s1.toArray.foreach(println)
}