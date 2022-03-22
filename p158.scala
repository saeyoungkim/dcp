/**
This problem was asked by Slack.

You are given an N by M matrix of 0s and 1s. Starting from the top left corner, how many ways are there to reach the bottom right corner?

You can only move right and down. 0 represents an empty space while 1 represents a wall you cannot walk through.

For example, given the following matrix:

[[0, 0, 1],
 [0, 0, 1],
 [1, 0, 0]]
Return two, as there are only two ways to get to the bottom right:

Right, down, down, right
Down, right, down, right
The top left corner and bottom right corner will always be 0.
*/

object P158 extends App {
    val matrix = List(List(0,0,1),List(0,0,0),List(0,0,0))

    val r = matrix.size
    val c = matrix.headOption.map(_.size).getOrElse(0)

    val dp = Array.ofDim[Option[Int]](r,c)

    for {
        i <- 0 until r
        j <- 0 until c
    } dp(i)(j) = None

    def dfs(currR: Int, currC: Int): Int = {
        if (currR < 0 || currC < 0 || currR >= r || currC >= c) 
            0 
        else {
            val tmp = dp(currR)(currC).getOrElse {
                (currR, currC) match {
                    case (_,_) if matrix(currR)(currC) == 1 => 0 // out of bounds
                    case (_,_) if currR == r-1 && currC == c-1 => 1
                    case (_,_) => dfs(currR+1,currC) + dfs(currR, currC+1)
                }
            }

            dp(currR)(currC) = Some(tmp)
            tmp
        }
    }

    println(dfs(0,0))
}