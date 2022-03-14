/**
Given a 2-D matrix representing an image, a location of a pixel in the screen and a color C, replace the color of the given pixel and all adjacent same colored pixels with C.

For example, given the following matrix, and location pixel of (2, 2), and 'G' for green:

B B W
W W W
W W W
B B B
Becomes

B B G
G G G
G G G
B B B
*/

object P150 extends App {

    private val dirs: List[(Int,Int)] = List((0,-1), (0,1), (1,0), (-1,0))
    
    def paintSameColor(grid: Array[Array[Char]], color: Char, pos: (Int, Int)) = {
        val (x,y) = pos
        val prevColor = grid(x)(y)

        var l = List[(Int,Int)](pos)

        while (!l.isEmpty) {
            val (cx,cy) = l.head
            l = l.tail

            if(cx >= 0 && cy >= 0 && cx < grid.size && cy < grid.head.size && grid(cx)(cy) == prevColor) {
                grid(cx)(cy) = color

                dirs.map { dir =>
                    val (dx,dy) = dir
                    l = l :+ (cx+dx, cy+dy)
                }
            }
        }
    }

    val grid = Array(
        Array('B', 'B', 'W'),
        Array('B', 'W', 'W'),
        Array('B', 'W', 'W'),
        Array('W', 'B', 'W'),
    )

    grid foreach { row =>
        println(row.mkString(" "))
    }

    println("========================")

    val new_grid = paintSameColor(grid, 'B', (2,2))

    grid foreach { row =>
        println(row.mkString(" "))
    }
}