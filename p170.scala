/**

Good morning! Here's your coding interview problem for today.

This problem was asked by Facebook.

Given a start word, an end word, and a dictionary of valid words, find the shortest transformation sequence from start to end such that only one letter is changed at each step of the sequence, and each transformed word exists in the dictionary. If there is no possible transformation, return null. Each word in the dictionary have the same length as start and end and is lowercase.

For example, given start = "dog", end = "cat", and dictionary = {"dot", "dop", "dat", "cat"}, return ["dog", "dot", "dat", "cat"].

Given start = "dog", end = "cat", and dictionary = {"dot", "tod", "dat", "dar"}, return null as there is no possible transformation from dog to cat.
*/

object P170 extends App {
    val dictList = List("dot", "doq", "dat", "cat")
    val start = "dog"
    val end  = "cat"

    def find(start: String, end: String, list: List[String]): List[String] = {
        val dict = scala.collection.mutable.Set[String](dictList: _*)
        if(dict.contains(end)) {
            var wordsFromStart = scala.collection.immutable.Set[String](start)
            var wordsFromEnd = scala.collection.immutable.Set[String](end)

            val pathLogFromStart = scala.collection.mutable.Map[String,List[String]]()
            val pathLogFromEnd = scala.collection.mutable.Map[String,List[String]]()

            pathLogFromStart += ((start -> List(start)))
            pathLogFromEnd += ((end -> List(end)))

            dict -= end

            var existPath = false
            var ans: List[String] = Nil
            var canExit = false
            while(!existPath && !canExit) {
                var newSet = scala.collection.immutable.Set[String]()
                if(wordsFromStart.size <= wordsFromEnd.size) {
                    for(word <- wordsFromStart) {
                        for {
                            i <- 0 until word.length
                            j <- 0 until 26 if word(i) != ('a' + j).toChar
                        } {
                            val tmp = word.substring(0,i) + ('a' + j).toChar + word.substring(i+1, word.length)
                            if(pathLogFromEnd.contains(tmp)) {
                                ans = pathLogFromStart(start) ++ pathLogFromEnd(tmp)
                                existPath = true
                            } else if(dict.contains(tmp)){
                                newSet += tmp
                                dict -= tmp
                                pathLogFromStart += ((tmp -> (pathLogFromStart(word) :+ tmp)))
                            }
                        }
                    }
                    if(newSet.isEmpty) canExit = true else wordsFromStart = newSet
                } else {
                    for(word <- wordsFromEnd) {
                        for {
                            i <- 0 until word.length
                            j <- 0 until 26 if word(i) != ('a' + j).toChar
                        } {
                            val tmp = word.substring(0,i) + ('a' + j).toChar + word.substring(i+1, word.length)
                            if(pathLogFromStart.contains(tmp)) {
                                ans = pathLogFromStart(tmp) ++ pathLogFromEnd(word)
                                existPath = true
                            } else if(dict.contains(tmp)){
                                newSet += tmp
                                dict -= tmp
                                pathLogFromEnd += ((tmp -> (tmp +: pathLogFromEnd(word))))
                            }
                        }
                    }
                    if(newSet.isEmpty) canExit = true else wordsFromEnd = newSet
                }
            }

            ans
        } else
            Nil
    }

    val ans = find(start, end, dictList)

    ans.foreach(v => print(s"$v "))
    println()
}