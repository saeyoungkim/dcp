/**
This problem was asked by Amazon.

Given n numbers, find the greatest common denominator between them.

For example, given the numbers [42, 56, 14], return 14.
*/

// GCD(N) = GCD(GCD(2) GCD(N-2))

object P184 extends App {
    def gcd(x: Int, y: Int): Int = {
        if(y == 0)
            x
        else
            gcd(y, x%y)
    }

    val l = List(42,56,14)    

    def gcds(x: List[Int]): Int = {
        x.foldLeft(x.head) { case (acc, v) =>
            gcd(acc max v, acc min v)
        }
    }

    println(gcds(l))
}