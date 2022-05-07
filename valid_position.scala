/**
8 directions: N\W\E\S\NW\NE\SW\SE
check whether the input is valid?
input : P1NP2,P2NP3,P3NP1

P1 is North of P2
P2 is North of P3
P3 is North of P1
Output: False (since P3 will be in the South of P1)
*/

object ValidPosition extends App {
    val dirs = Array("N", "S", "E", "W")

    val arrs1 = Array(
        Array("P1", "N", "P2"),
        Array("P2", "N", "P3"),
        Array("P3", "N", "P1"),
    )

    val arrs2 = Array(
        Array("A", "N", "B"),
        Array("B", "NE", "C"),
        Array("C", "N", "A"),
    )

    val arrs3 = Array(
        Array("A", "NW", "B"),
        Array("A", "N", "V"),
    )

    import scala.collection.mutable.{Map,Set}

    def dfs(source: String, target: String, paths: Map[String, Set[String]]): Boolean = {
        val isVisited = Set[String]()

        def _dfs(source: String, target: String, paths: Map[String, Set[String]]): Boolean = {
            if(source == target)
                true
            else if(isVisited.contains(source))
                false
            else {
                isVisited += source
                paths.getOrElse(source, Set[String]()).filter(!isVisited.contains(_)).exists(next => _dfs(next, target, paths))
            }
        }

        _dfs(source, target, paths)
    }

    def isValid(arrs: Array[Array[String]]): Boolean = {
        val relationsPerDirection = Map[String, Map[String, Set[String]]](dirs.map(ch => (ch, Map[String, Set[String]]())) : _*)

        var ans = true

        for(arr <- arrs if ans) {
            if(arr(1).contains("N")) {
                if(dfs(arr(2), arr(0), relationsPerDirection("N")))
                    ans = false
                else {
                    relationsPerDirection("N") += ((arr(0) -> (relationsPerDirection("N").getOrElse(arr(0), Set[String]()) + arr(2))))
                    relationsPerDirection("S") += ((arr(2) -> (relationsPerDirection("S").getOrElse(arr(2), Set[String]()) + arr(0))))
                }
            }
            if(arr(1).contains("S")) {
                if(dfs(arr(2), arr(0), relationsPerDirection("S")))
                    ans = false
                else {
                    relationsPerDirection("S") += ((arr(0) -> (relationsPerDirection("S").getOrElse(arr(0), Set[String]()) + arr(2))))
                    relationsPerDirection("N") += ((arr(2) -> (relationsPerDirection("N").getOrElse(arr(2), Set[String]()) + arr(0))))
                }
            }
            if(arr(1).contains("E")) {
                if(dfs(arr(2), arr(0), relationsPerDirection("E")))
                    ans = false
                else {
                    relationsPerDirection("E") += ((arr(0) -> (relationsPerDirection("E").getOrElse(arr(0), Set[String]()) + arr(2))))
                    relationsPerDirection("W") += ((arr(2) -> (relationsPerDirection("W").getOrElse(arr(2), Set[String]()) + arr(0))))
                }
            }
            if(arr(1).contains("W")) {
                if(dfs(arr(2), arr(0), relationsPerDirection("W")))
                    ans = false
                else {
                    relationsPerDirection("W") += ((arr(0) -> (relationsPerDirection("W").getOrElse(arr(0), Set[String]()) + arr(2))))
                    relationsPerDirection("E") += ((arr(2) -> (relationsPerDirection("E").getOrElse(arr(2), Set[String]()) + arr(0))))
                }
            }
        }

        ans
    }

    println(isValid(arrs1)) // false
    println(isValid(arrs2)) // false
    println(isValid(arrs3)) // true
}