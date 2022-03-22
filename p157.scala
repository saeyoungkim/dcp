/**
This problem was asked by Amazon.

Given a string, determine whether any permutation of it is a palindrome.

For example, carrace should return true, since it can be rearranged to form racecar, which is a palindrome. daily should return false, since there's no rearrangement that can form a palindrome.
*/

object P157 extends App {
    val count = scala.collection.mutable.Map[Char,Int]().withDefaultValue(0)

    val str = scala.io.StdIn.readLine()

    str.foreach(ch => count += (ch -> (count(ch) + 1)))

    var oddChAppeared = false
    println(count.forall{ case (ch, count) => count match {
        case _ if count % 2 == 0 => true
        case _ => if(!oddChAppeared) {oddChAppeared = true; true} else false
    }})
}