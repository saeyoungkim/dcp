/**
This problem was asked by Google.

Let A be an N by M matrix in which every row and every column is sorted.

Given i1, j1, i2, and j2, compute the number of elements of M smaller than M[i1, j1] and larger than M[i2, j2].

For example, given the following matrix:

[[1, 3, 7, 10, 15, 20],
 [2, 6, 9, 14, 22, 25],
 [3, 8, 10, 15, 25, 30],
 [10, 11, 12, 23, 30, 35],
 [20, 25, 30, 35, 40, 45]]
And i1 = 1, j1 = 1, i2 = 3, j2 = 3, return 15 as there are 15 numbers in the matrix smaller than 6 or greater than 23.
*/

object P195 extends App {
    val matrix = Array(
        Array(1,3,7,10,15,20),
        Array(2, 6, 9, 14, 22, 25),
        Array(3, 8, 10, 15, 25, 30),
        Array(10, 11, 12, 23, 30, 35),
        Array(20, 25, 30, 35, 40, 45),
    )

    val m = matrix.size
    val n = matrix.head.size

    def countSmallerThan(i: Int, j: Int): Int = {
        val stand = matrix(i)(j)

        var res = 0

        val q = scala.collection.mutable.Queue[(Int,Int)]()

        q.enqueue((0,0))

        val isVisited = scala.collection.mutable.Set[(Int,Int)]()

        while(!q.isEmpty) {
            val (x,y) = q.dequeue()

            if(!isVisited((x,y))) {
                isVisited += ((x,y))

                if(matrix(x)(y) < stand) res += 1

                if(x < m-1 && matrix(x+1)(y) < stand)
                    q.enqueue((x+1,y))

                if(y < n-1 && matrix(x)(y+1) < stand)
                    q.enqueue((x,y+1))
            }
        }

        println(res)

        res
    }

    def countBiggerThan(i: Int, j: Int): Int = {
        val stand = matrix(i)(j)

        var res = 0

        val q = scala.collection.mutable.Queue[(Int,Int)]()

        q.enqueue((m-1,n-1))

        val isVisited = scala.collection.mutable.Set[(Int,Int)]()

        while(!q.isEmpty) {
            val (x,y) = q.dequeue()

            if(!isVisited((x,y))) {
                isVisited += ((x,y))

                if(matrix(x)(y) > stand) res += 1

                if(x > 0 && matrix(x-1)(y) > stand)
                    q.enqueue((x-1,y))

                if(y > 0 && matrix(x)(y-1) > stand)
                    q.enqueue((x,y-1))
            }
        }

        println(res)

        res
    }

    val ans = countSmallerThan(1,1) + countBiggerThan(3,3)

    println(ans)
}