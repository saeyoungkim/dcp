
/**
This problem was asked by Goldman Sachs.

Given a list of numbers L, implement a method sum(i, j) which returns the sum from the sublist L[i:j] (including i, excluding j).

For example, given L = [1, 2, 3, 4, 5], sum(1, 3) should return sum([2, 3]), which is 5.

You can assume that you can do some pre-processing. sum() should be optimized over the pre-processing step.
*/

object P149 extends App {
    val list = List(1,2,3,4,5)
    
    // pre-process
    val preProcessList = list.scan(0)((z,n) => z + n)

    def sum(i: Int, j: Int): Int = preProcessList(j) - preProcessList(i)
    
    println(sum(1,3))
}