/**
This problem was asked by LinkedIn.

Given a list of points, a central point, and an integer k, find the nearest k points from the central point.

For example, given the list of points [(0, 0), (5, 4), (3, 1)], the central point (1, 2), and k = 2, return [(0, 0), (3, 1)].
*/

object P150 extends App {
    val centeralPoint = (1,2)

    val points = List((0,0),(5,4),(3,1))

    val k = 2

    def nearestKPoints(points: List[(Int,Int)], centeralPoint: (Int,Int), k: Int): List[(Int,Int)] = {
        def dist(p1: (Int,Int), p2: (Int, Int)) = {
            val (x1,y1) = p1
            val (x2,y2) = p2

            (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)
        }
        
        points.sortWith { (p1,p2) =>
            dist(p1,centeralPoint) < dist(p2, centeralPoint)
        }.take(k)
    }

    println(nearestKPoints(points, centeralPoint, k))
}