/**
This problem was asked by Dropbox.

Given a string s and a list of words words, where each word is the same length, find all starting indices of substrings in s that is a concatenation of every word in words exactly once.

For example, given s = "dogcatcatcodecatdog" and words = ["cat", "dog"], return [0, 13], since "dogcat" starts at index 0 and "catdog" starts at index 13.

Given s = "barfoobazbitbyte" and words = ["dog", "cat"], return [] since there are no substrings composed of "dog" and "cat" in s.

The order of the indices does not matter.
*/

object P172 extends App {
    val words = List("cat", "dog")

    val s1 = "dogcatcatcodecatdog"

    val s2 = "barboobazbitbyte"

    def solve(s: String, words: List[String]): List[Int] = {
        val wordSet = words.toSet

        val wordSize = words.head.length

        val buf = scala.collection.mutable.ListBuffer.empty[Int]

        for (i <- 0 until wordSize) {
            val count = scala.collection.mutable.Map[String,Int]().withDefaultValue(0)
            var curr = 0
            for (j <- (s.length - wordSize - i) to 0 by -wordSize) {
                val prevIdx = j + words.size * wordSize
                if(prevIdx >= 0 && prevIdx + wordSize <= s.length) {
                    val prev = s.substring(prevIdx, prevIdx + wordSize)
                    if(count.getOrElse(prev, 0) == 1) {
                        count(prev) = count(prev) - 1
                        if(count(prev) == 0) {
                            curr -= 1
                            count -= prev
                        }
                    }
                } 

                val tmp = s.substring(j, j+wordSize)
                if(wordSet.contains(tmp)) {
                    count(tmp) = count(tmp) + 1
                    if(count(tmp) == 1) {
                        curr += 1
                    }
                }

                if(curr == words.size) buf += j
            }
        }

        buf.toList
    }

    solve(s1, words).foreach(v => print(s"$v "))
    println()
    solve(s2, words).foreach(v => print(s"$v "))
    println()
}