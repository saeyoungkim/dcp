/**
This problem was asked by Facebook.

Given an N by N matrix, rotate it by 90 degrees clockwise.

For example, given the following matrix:

[[1, 2, 3],
 [4, 5, 6],
 [7, 8, 9]]
you should return:

[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]
Follow-up: What if you couldn't use any extra space?
*/

// [r-3,0] -> [0,r-1]
// [r-2,0] -> [0,r-2]
// [r-1,0] -> [0,r-3]
// [r-3,1] -> [1.r-1]

object P168 extends App {
    val mat = Array(Array(1,2,3), Array(4,5,6), Array(7,8,9))

    mat.foreach(arr => { arr.foreach(v => print(s"$v ")); println() })

    for {
        i <- 0 until mat.size
        j <- i+1 until mat.size
    } {
        val tmp = mat(i)(j)
        mat(i)(j) = mat(j)(i)
        mat(j)(i)= tmp
    }

    println("================")

    for {
        i <- 0 until (mat.size >> 1)
        j <- 0 until mat.size
    } {
        val tmp = mat(j)(i)
        mat(j)(i) = mat(j)(mat.size-1-i)
        mat(j)(mat.size-1-i)= tmp
    }

    mat.foreach(arr => { arr.foreach(v => print(s"$v ")); println() })
}