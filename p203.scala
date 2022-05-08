/**
This problem was asked by Uber.

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand. Find the minimum element in O(log N) time. You may assume the array does not contain duplicates.

For example, given [5, 7, 10, 3, 4], return 3.
*/

object P203 extends App {
    // 1. we get mid
    // 2. if left is smaller than right => left answer
    // 3. else if mid is smaller than left => minimum value is left
    // 4. else => mid + 1

    import scala.util.control.Breaks

    val breaks = new Breaks()

    import breaks.{break, breakable}

    val l1 = Array(5,7,10,3,4)
    val l2 = Array(3,4,5,7,10)
    val l3 = Array(4,5,7,10,3)

    def getMinimumElement(arr: Array[Int]): Int = {
        var l = 0
        var r = arr.size-1

        breakable {
            while(l < r) {
                val mid = l + ((r-l) >> 1)

                if(arr(l) > arr(mid))
                    r = mid
                else if(arr(mid) > arr(r))
                    l = mid+1
                else
                    break
            }
        }

        arr(l)
    }

    println(getMinimumElement(l1)) // 3
    println(getMinimumElement(l2)) // 3
    println(getMinimumElement(l3)) // 3
}