/**
This problem was asked by Google.

Given a string, split it into as few strings as possible such that each string is a palindrome.

For example, given the input string racecarannakayak, return ["racecar", "anna", "kayak"].

Given the input string abc, return ["a", "b", "c"].
*/

object P181 extends App {
    val str = "racecarannakayak"

    val dp = Array.fill[Array[Boolean]](str.length)(Array.fill[Boolean](str.length)(true))

    for{
        i <- 2 to str.length
        j <- 0 to str.length-i
    } {
        dp(j)(j+i-1) = (str(j) == str(j+i-1) && dp(j+1)(j+i-2) == true)
    }

    def bfs(): List[String] = {
        import scala.collection.mutable._
        val q = Queue[(Int,ListBuffer[(Int,Int)])]() // _1 current Index _2 paths
        val isVisited = Array.fill[Boolean](str.length)(false)
        // there is no need to revisit the node
        // 0 ... n 0 ... k k+1 ... n

        q.enqueue((0, ListBuffer[(Int,Int)]()))

        var existsAnswer = false
        var ret: ListBuffer[(Int,Int)] = ListBuffer[(Int, Int)]()
        while(!q.isEmpty && !existsAnswer) {
            val (currIdx, paths) = q.dequeue()

            if(currIdx == str.length) {
                existsAnswer = true
                ret = paths
            } else if(!isVisited(currIdx)) {
                isVisited(currIdx) = true

                for(i <- str.length-1 to currIdx by -1) {
                    if(dp(currIdx)(i) == true) {
                        q.enqueue((i+1, paths :+ (currIdx, i)))
                    }
                } 
            }
        }

        ret.toList.map { case (start, end) => str.substring(start, end+1) }
    }

    val ans = bfs()

    println(ans)
}