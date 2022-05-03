/**
This problem was asked by Google.

Given a set of distinct positive integers, find the largest subset such that every pair of elements in the subset (i, j) satisfies either i % j = 0 or j % i = 0.

For example, given the set [3, 5, 10, 20, 21], you should return [5, 10, 20]. Given [1, 3, 6, 24], return [1, 3, 6, 24].
*/

object P198 extends App {
    val s = scala.collection.mutable.Set[Int](3,24,6,1)

    val sortedS = s.toArray.sorted

    var ans = scala.collection.mutable.Set[Int]()

    for(i <- 0 until sortedS.size) {
        val value = sortedS(i)
        val tmp = scala.collection.mutable.Set[Int](value)

        for(j <- i+1 until sortedS.size if (sortedS(j) % value) == 0) {
            tmp += sortedS(j)
        }

        if(tmp.size > ans.size) {
            ans = tmp
        }
    } 

    println(ans)
}