/**
This problem was asked by Palantir.

Write a program that checks whether an integer is a palindrome. For example, 121 is a palindrome, as well as 888. 678 is not a palindrome. Do not convert the integer into a string.
*/

object P202 extends App {
    val x = scala.io.StdIn.readInt
    
    if(x < 0) {
        println(false)
    } else {   
        var y: Long = 0L 
        var tmp = x
        while(tmp > 0) {
            y = 10 * y + (tmp % 10)
            tmp /= 10
        }

        println(y)

        if(x.toLong == y)
            println(true)
        else
            println(false)
    }

}