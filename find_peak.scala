object FindPeak extends App {
    val arr = Array(10,7,5,3,1,2,4,7,8)
    val arr2 = Array(1,2,4,7,8)
    val arr3 = Array(10,7,5,3,1,7)


    def getPeakIndex(arr: Array[Int]): Int = {
        var l = 0
        var r = arr.size-1

        while(l <= r) {
            val mid = l + ((r-l) >> 1)

            if(mid == arr.size-1 || arr(mid) < arr(mid+1)) {
                r = mid-1
            } else {
                l = mid+1
            }
        }

        l
    }

    println(getPeakIndex(arr))
    println(getPeakIndex(arr2))
    println(getPeakIndex(arr3))
}