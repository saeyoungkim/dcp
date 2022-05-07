/**
You are given an array of arrays of integers, where each array corresponds to a row in a triangle of numbers. For example, [[1], [2, 3], [1, 5, 1]] represents the triangle:

  1
 2 3
1 5 1
We define a path in the triangle to start at the top and go down one row at a time to an adjacent value, eventually ending with an entry on the bottom row. For example, 1 -> 3 -> 5. The weight of the path is the sum of the entries.

Write a program that returns the weight of the maximum weight path.
*/

object P201 extends App {
    val triangle = Array(Array(1), Array(2,3), Array(1,5,1))

    var ans = Int.MinValue
    for(i <- 0 until triangle.size) {
        if(i == 0)
            ans = triangle(0).head
        else {
            for(j <- 0 until triangle(i).size) {
                if(j == 0)
                    triangle(i)(j) += triangle(i-1)(j)
                else if(j == triangle(i).size-1)
                    triangle(i)(j) += triangle(i-1)(j-1)
                else if(triangle(i-1)(j-1) <= triangle(i-1)(j))
                    triangle(i)(j) += triangle(i-1)(j)
                else
                    triangle(i)(j) += triangle(i-1)(j-1)

                ans = ans max triangle(i)(j)
            }
        }
    }

    println(ans)
}