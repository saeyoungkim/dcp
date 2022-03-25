/**
This problem was asked by Square.

Given a list of words, return the shortest unique prefix of each word. For example, given the list:

dog
cat
apple
apricot
fish
Return the list:

d
c
app
apr
f

*/

object P162 extends App {
    class Node {
        var count = 0
        val nexts = scala.collection.mutable.HashMap[Char, Node]()

        def insert(word: String, i: Int = 0): Unit = {
            if(i < word.length) {
                val next = nexts.getOrElseUpdate(word(i), new Node())
                next.count += 1
                next.insert(word, i+1)
            }
        }

        def unique_prefix(word: String, i: Int = 0): String = {
            if(i == word.length) ""
            else {
                val next = nexts.get(word(i))

                next match {
                    case Some(n) if n.count == 1 => word(i).toString
                    case Some(n) => word(i).toString ++ n.unique_prefix(word, i+1)
                    case None => ""
                }
            }
        }
    }

    val head = new Node()

    val l = List("dog", "cat", "apple", "apricot", "fish")

    val ans = l.map { str =>
        head.insert(str)
        str
    }.map(head.unique_prefix(_))

    println(ans)
}