/**
This problem was asked by Bloomberg.

Determine whether there exists a one-to-one character mapping from one string s1 to another s2.

For example, given s1 = abc and s2 = bcd, return true since we can map a to b, b to c, and c to d.

Given s1 = foo and s2 = bar, return false since the o cannot map to two characters.
*/

object P176 extends App {
    val s1 = scala.io.StdIn.readLine
    val s2 = scala.io.StdIn.readLine

    def existsOneToOne(s1: String, s2: String) : Boolean = {
        val mapping1To2 = scala.collection.mutable.Map[Char, Char]()
        val mapping2To1 = scala.collection.mutable.Map[Char, Char]()

        if(s1.length != s2.length)
            false
        else {
            s1.zip(s2).forall { case (ch1, ch2) =>
                (mapping1To2.contains(ch1), mapping2To1.contains(ch2)) match {
                    case (false, false) => {
                        mapping1To2 += ((ch1 -> ch2))
                        mapping2To1 += ((ch2 -> ch1))
                        true
                    }
                    case (true, true) => mapping1To2(ch1) == ch2 && mapping1To2(ch2) == ch1
                    case _ => false
                }
            }
        }
    }

    println(existsOneToOne(s1,s2))
}