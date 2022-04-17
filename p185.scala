/**
This problem was asked by Google.

Given two rectangles on a 2D graph, return the area of their intersection. If the rectangles don't intersect, return 0.

For example, given the following rectangles:

{
    "top_left": (1, 4),
    "dimensions": (3, 3) # width, height
}
and

{
    "top_left": (0, 5),
    "dimensions": (4, 3) # width, height
}
return 6.
*/

object P185 extends App {
    val topLeft1 = Array(1,4)
    val dimensions1 = Array(3,3)
    val topLeft2 = Array(0,5)
    val dimensions2 = Array(4,3)

    val leftMost1 = topLeft1(0)
    val rightMost1 = topLeft1(0) + dimensions1(0)
    val topMost1 = topLeft1(1)
    val bottomMost1 = topLeft1(1) - dimensions1(1)

    val leftMost2 = topLeft2(0)
    val rightMost2 = topLeft2(0) + dimensions2(0)
    val topMost2 = topLeft2(1)
    val bottomMost2 = topLeft2(1) - dimensions2(1)

    val ret = (
    if((leftMost1 >= rightMost2 || leftMost2 >= rightMost2) || (topMost1 <= bottomMost2 || topMost2 <= bottomMost1))
        0
    else
        ((rightMost1 min rightMost2) - (leftMost1 max leftMost2)) * ((topMost1 min topMost2) - (bottomMost1 max bottomMost2))
    )

    println(ret)
}