/**
This problem was asked by Google.

You are given an array of nonnegative integers. Let's say you start at the beginning of the array and are trying to advance to the end. You can advance at most, the number of steps that you're currently on. Determine whether you can get to the end of the array.

For example, given the array [1, 3, 1, 2, 0, 1], we can go from indices 0 -> 1 -> 3 -> 5, so return true.

Given the array [1, 2, 1, 0, 0], we can't reach the end, so return false.
*/

object P192 extends App {
    val arr1 = Array(1,3,1,2,0,1)
    val arr2 = Array(1,2,1,0,0)

    def canReach(arr: Array[Int]): Boolean = {
        // we start index 0
        // we calculate the maximum reach => maxReach max currIndx + arr(currIndx)
        // if maxReach smaller than arr.size-1 => fals else true

        var currIdx = 0
        var maxReach = 0

        var canReach = false

        while(currIdx <= (maxReach min arr.size-1) && !canReach) {

            maxReach = maxReach max (currIdx + arr(currIdx))

            if(maxReach >= arr.size-1)
                canReach = true

            currIdx += 1
        }

        canReach
    }

    println(canReach(arr1))
    println(canReach(arr2))
}