/**
This problem was asked by LinkedIn.

Given a list of points, a central point, and an integer k, find the nearest k points from the central point.

For example, given the list of points [(0, 0), (5, 4), (3, 1)], the central point (1, 2), and k = 2, return [(0, 0), (3, 1)].
*/

import scala.collection.mutable.PriorityQueue

object P150OPT extends App {
    val centeralPoint = (1,2)

    val points = List((0,0),(5,4),(3,1))

    val k = 2

    def nearestKPoints(points: List[(Int,Int)], centeralPoint: (Int,Int), k: Int): List[(Int,Int)] = {
        val pq = collection.mutable.PriorityQueue[(Int,Int)]()(Ordering.by {
            case (x,y) => {
                val (cpx, cpy) = centeralPoint

                (x-cpx)*(x-cpx) + (y-cpy)*(y-cpy)
            } 
        })

        for (point <- points) {
            pq.enqueue(point._1 -> point._2)
            if(pq.size > k) {
                pq.dequeue()
            }
        }

        pq.toList
    }

    println(nearestKPoints(points, centeralPoint, k))
}