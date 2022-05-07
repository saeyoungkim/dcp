/**
You are given list of points appearing and disappearing dynamically on the screen.
Write an algorithm to compute minimum bounded box.

so, if points are:
(-1,1) (0,0), (4,5), (5,1)

bounded box is:
(-1,0) and (5,5)
*/

case class MinimumBoundedBox() {
    var xMin = Int.MaxValue
    var yMin = Int.MaxValue
    var xMax = Int.MinValue
    var yMax = Int.MinValue



    import scala.collection.mutable.{TreeMap, Set}
    val xMap = TreeMap[Int,Int]().withDefaultValue(0)
    val yMap = TreeMap[Int,Int]().withDefaultValue(0)

    val points = Set[(Int,Int)]()

    def add(point: (Int,Int)): Unit = {
        points += point
        val (x,y) = point
        xMap(x) += 1
        yMap(y) += 1

        xMin = xMin min x
        yMin = yMin min y
        xMax = xMax max x    
        yMax = yMax max y
    }

    def remove(point: (Int, Int)): Unit = {
        if(points.contains(point)) {
            points -= point
            val (x,y) = point
            xMap(x) -= 1
            yMap(y) -= 1

            if(xMap(x) == 0) {
                xMap -= x
                if(xMin == x)
                    xMin = if(points.isEmpty) Int.MaxValue else xMap.head._1
                if(xMax == x)
                    xMax = if(points.isEmpty) Int.MinValue else xMap.last._1
            }
            if(yMap(y) == 0) {
                yMap -= y
                if(yMin == y)
                    yMin = if(points.isEmpty) Int.MaxValue else yMap.head._1
                if(yMax == y)
                    yMax = if(points.isEmpty) Int.MinValue else yMap.last._1
            }
        }
    }

    def computeBox(): ((Int, Int), (Int, Int)) = {
        ((xMin, yMin), (xMax, yMax))
    }
}

object MinimumBoundedBox extends App {
    val mbb = MinimumBoundedBox()

    val points = List((-1,1), (0,0), (4,5), (5,1))

    mbb.add((-1,1))
    println(mbb.computeBox)

    mbb.add((0,0))
    println(mbb.computeBox)

    mbb.add((4,5))
    println(mbb.computeBox)

    mbb.add((5,1))
    println(mbb.computeBox)

    mbb.remove((4,5))
    println(mbb.computeBox)
}