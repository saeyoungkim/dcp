/**
This problem was asked by Triplebyte.

You are given n numbers as well as n probabilities that sum up to 1. Write a function to generate one of the numbers with its corresponding probability.

For example, given the numbers [1, 2, 3, 4] and probabilities [0.1, 0.5, 0.2, 0.2], your function should return 1 10% of the time, 2 50% of the time, and 3 and 4 20% of the time.

You can generate random numbers between 0 and 1 uniformly.
*/

object P152 extends App {
    val num = Array(1,2,3,4)
    val prob = List(0.1,0.5,0.2,0.2)

    val probSums = prob.scan(0.0)(_ + _).drop(1)

    def getRandomNumber(num: Array[Int], prob: List[Double]): Int = {
        val r = new scala.util.Random().between(0.0, 1.0)

        var s = 0.0
        for((num, prob) <- num.zip(prob)) {
            s += prob
            if(s > r) {
                return num
            }
        }

        num.last
    }

    def getRandomNumberOpt(num: Array[Int], probSums: List[Double], prob: List[Double]): Int = {

        val r = new scala.util.Random().between(0.0, 1.0)

        import scala.collection.Searching._
        probSums.search(r) match {
            case Found(idx) if idx == probSums.length-1 => num(idx)
            case Found(idx) => num(idx+1)
            case InsertionPoint(idx) => num(idx)
        }
    }

    Range(0,20).foreach { _ => println(getRandomNumberOpt(num, probSums, prob)) }

    println("==========")

    Range(0,20).foreach { _ => println(getRandomNumber(num, prob)) }
}