/**
There are n cities, cities are connected with flights routes. There are certain cities which are banned, we cannot travel throught the banned city. Start city and Destination are given

1. we need to find the shortest Path if it exists between Start and Destination, otherwise return -1.
2. Return the shortestPath.
3. Give the shortest distance by visiting the minimum number of banned cities.
4. What is the time complexity of the solution
Initially the question was asked and if answer was given, interviewer added the follow-up questions.
*/

object TravelCities extends App {
    val n = 100

    val paths = Array(
        Array(0,5),
        Array(0,2),
        Array(3,2),
        Array(1,3),
        Array(0,4),
        Array(4,2),
        Array(1,6),
        Array(6,4),
        Array(6,5),
    )

    val bannedCities = Array(6)

    val bannedCitiesSet = bannedCities.toSet

    // 4,5 0 2 3 1 

    import scala.collection.mutable._
    val ps = Map[Int, ListBuffer[Int]]()

    for(path <- paths) {
        if(!ps.contains(path(0)))
            ps += ((path(0) -> ListBuffer[Int]()))
        ps(path(0)) += path(1)

        if(!ps.contains(path(1)))
            ps += ((path(1) -> ListBuffer[Int]()))
        ps(path(1)) += path(0)
    }

    def findShortestPath(start: Int, destination: Int): ListBuffer[Int] = {
        val q = Queue[(Int, ListBuffer[Int])]()

        val isVisited = Array.fill[Boolean](n)(false)

        q.enqueue((start, ListBuffer[Int](start)))
        isVisited(start) = true

        var ans = ListBuffer[Int]()

        import scala.util.control.Breaks
        val mybreaks = new Breaks
        import mybreaks.{break, breakable}
        mybreaks.breakable {
            while(!q.isEmpty) {
                val (curr, paths) = q.dequeue()

                if(curr == destination) {
                    ans = paths
                    mybreaks.break
                } else {
                    ps(curr).foreach { next =>
                        if(!isVisited(next) && !bannedCitiesSet.contains(next)) {
                            isVisited(next) = true
                            q.enqueue((next, paths :+ next))
                        }
                    }
                }
            }
        }

        ans
    }

    val ans = findShortestPath(1,4)

    // 3 use priortiyhqueue
    // count <- banned

    println(ans)
}