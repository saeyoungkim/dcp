/**
This problem was asked by Facebook.

Given a positive integer n, find the smallest number of squared integers which sum to n.

For example, given n = 13, return 2 since 13 = 3^2 + 2^2 = 9 + 4.

Given n = 27, return 3 since 27 = 3^2 + 3^2 + 3^2 = 9 + 9 + 9.
*/

object P156 extends App {
    val mm = scala.collection.mutable.Map[Int,Int]()

    def countMinimum(n: Int): Int = {
        mm.getOrElse(n, {
            n match {
                case 0 => 0
                case _ if n < 0 => -1
                case _ => {
                    val sq = scala.math.sqrt(n).toInt
                    var ret = -1

                    for(sub <- sq to 1 by -1 if ret == -1) {
                        val remainResult = countMinimum(n - sub*sub)
                        mm += ((n - sub*sub) -> (1 + remainResult))
                        ret = 1 + remainResult
                    }

                    ret
                }
            }
        })
    }

    val n = scala.io.StdIn.readInt()

    println(countMinimum(n))
}