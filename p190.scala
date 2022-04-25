/**
This problem was asked by Facebook.

Given a circular array, compute its maximum subarray sum in O(n) time. A subarray can be empty, and in this case the sum is 0.

For example, given [8, -1, 3, 4], return 15 as we choose the numbers 3, 4, and 8 where the 8 is obtained from wrapping around.

Given [-4, 5, 1, 0], return 6 as we choose the numbers 5 and 1.
*/

object P190 extends App {
    // concat array and get max sub sum

    val l1 = List(8,-1,3,4)
    val l2 = List(-4,5,1,0)
    val l3 = List()

    def calcMaximumSubarraySum(l: List[Int]): Int = {
        var ans = 0

        var maximumSubWithLastElement = 0
        for(num <- l) {
            if(maximumSubWithLastElement < 0)
                maximumSubWithLastElement = num
            else
                maximumSubWithLastElement += num

            ans = ans max maximumSubWithLastElement
        }

        val sum = l.sum
        var minimumSubWithLastElement = 0
        for(num <- l) {
            if(minimumSubWithLastElement >= 0)
                minimumSubWithLastElement = num
            else
                maximumSubWithLastElement += num

            ans = ans max (sum - minimumSubWithLastElement)
        }

        ans
    }

    println(calcMaximumSubarraySum(l1))
    println(calcMaximumSubarraySum(l2))
    println(calcMaximumSubarraySum(l3))
}