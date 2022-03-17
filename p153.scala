/**
Find an efficient algorithm to find the smallest distance (measured in number of words) between any two given words in a string.

For example, given words "hello", and "world" and a text content of "dog cat hello cat dog dog hello cat world", return 1 because there's only one word "cat" in between the two words.

*/

object P153 extends App {
    val t1 = scala.io.StdIn.readLine()
    val t2 = scala.io.StdIn.readLine()
    val str = scala.io.StdIn.readLine()

    var ans = Int.MaxValue

    var lastPos1 = -1
    var lastPos2 = -1

    str.split(" ").zipWithIndex.foreach { case (s, idx) =>
        s match {
            case s1 if s1 == t1 => {
                if(lastPos2 != -1) ans = ans min (idx - lastPos2 - 1)
                lastPos1 = idx
            }
            case s2 if s2 == t2 => {
                if(lastPos1 != -1) ans = ans min (idx - lastPos1 - 1)
                lastPos2 = idx
            }
            case _ => ()
        }
    }

    println(ans)
}