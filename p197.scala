/**
This problem was asked by Amazon.

Given an array and a number k that's smaller than the length of the array, rotate the array to the right k elements in-place.
*/

object P197 extends App {
    // [1,2,3,4,5] k = 3

    // [1,3,4,5,2]

    // [3,4,5,1,2]

    // [3,4,5,1,2] 

    // [1,2,3,4,5]
    // [4,5,1,2,3]

    // [1,2,3,4,5] k = 4
    // [2,3,4,5,1]


    // 1. we calculate the number of elements moved to right side

    // len - k elements will be moved to right

    // 2. we move the element in the target groups from the right end and move k

    val l = Array(1,2,3,4,5)

    val k = scala.io.StdIn.readInt

    def moveK(l: Array[Int], k: Int): Unit = {
        val NumberOfElementsBeMoved = l.size - k

        for(i <- NumberOfElementsBeMoved-1 to 0 by -1) {
            for(j <- 0 until k) {
                val tmp = l(i+j+1)
                l(i+j+1) = l(i+j)
                l(i+j) = tmp
            }
        }
    }

    l.foreach(v => print(s"$v "))
    println()
    moveK(l,k)
    l.foreach(v => print(s"$v "))
    println()
}