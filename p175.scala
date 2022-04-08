/**
This problem was asked by Google.

You are given a starting state start, a list of transition probabilities for a Markov chain, and a number of steps num_steps. Run the Markov chain starting from start for num_steps and compute the number of times we visited each state.

For example, given the starting state a, number of steps 5000, and the following transition probabilities:

[
  ('a', 'a', 0.9),
  ('a', 'b', 0.075),
  ('a', 'c', 0.025),
  ('b', 'a', 0.15),
  ('b', 'b', 0.8),
  ('b', 'c', 0.05),
  ('c', 'a', 0.25),
  ('c', 'b', 0.25),
  ('c', 'c', 0.5)
]
One instance of running this Markov chain might produce { 'a': 3012, 'b': 1656, 'c': 332 }.
*/

object P175 extends App {
    val r = new scala.util.Random()

    val numSteps = 5000
    val start = 'a'

    val probabilities = Map[Char, Map[Char, Double]](
        ('a' -> Map[Char,Double](('a' -> 0.9), ('b' -> 0.075), ('c' -> 0.025))),
        ('b' -> Map[Char,Double](('a' -> 0.15), ('b' -> 0.8), ('c' -> 0.005))),
        ('c' -> Map[Char,Double](('a' -> 0.25), ('b' -> 0.25), ('c' -> 0.5))),
    )

    import scala.collection.mutable._
    val _probabilities = Map[Char, TreeMap[Double, Char]]().withDefaultValue(TreeMap[Double, Char]())

    probabilities.foreach { case (k, v) => 
        v.foldLeft(0.0) { case (acc, (state, prob)) =>
            _probabilities(k) += (((prob + acc) -> state))
            prob + acc
        }
    }    

    var curr = start
    val count = Map[Char, Int]().withDefaultValue(0)
    for(i <- 1 to numSteps) {
        val rand = r.nextDouble()

        curr =  _probabilities(curr).rangeFrom(rand).head._2
        count(curr) += 1
    }

    count.foreach{ case (k, v) => print(s"{ $k : $v }\n")}
}