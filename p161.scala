/**
This problem was asked by Facebook.

Given a 32-bit integer, return the number with its bits reversed.

For example, given the binary number 1111 0000 1111 0000 1111 0000 1111 0000, return 0000 1111 0000 1111 0000 1111 0000 1111
*/

object P161 extends App {
    val i = Integer.parseInt("1001",2)

    println(i.toBinaryString)

    println((i ^ -1).toBinaryString)
}