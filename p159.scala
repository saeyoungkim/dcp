/**
This problem was asked by Google.

Given a string, return the first recurring character in it, or null if there is no recurring character.

For example, given the string "acbbac", return "b". Given the string "abcdef", return null.
*/

object P159 extends App {
    val str = scala.io.StdIn.readLine

    def firstRecurringChar(str: String): Option[Char] = {
        val ms = scala.collection.mutable.Set[Char]()

        val notRecurringSize = str.takeWhile { ch =>
            val isRecurring = ms contains ch

            ms += ch
            !isRecurring
        }.size

        if(notRecurringSize == str.size) None else Some(str(notRecurringSize))
    }

    println(firstRecurringChar(str))
}