/**
In how many ways you can build a tower of height n, using 1X3, 2X3, and 3X3 blocks.
[ ][ ][ ]

[ ][ ][ ]
[ ][ ][ ]

[ ][ ][ ]
[ ][ ][ ]
[ ][ ][ ]

You can use any number of blocks, and rotations are counted as different.

Examples:

n=1 : only way we can build a tower of height 1 and width 3 is by picking 1 1X3 matrix.

n=2 : 2 ways, i.e chose 2 blocks of 1X3 or 1 block of 2X3.

rotation don't really count as they'd be the same orientaion in the above base cases.

n=3 : 6 ways

Let's say 000 -1X3's and xxx represents 2X3's and Y's represents 3X3 so we have following ways:

000 XXX 000 0XX XX0 YYY
000 XXX XXX 0XX XX0 YYY
000 000 XXX 0XX XX0 YYY
*/

object BuildTowers extends App {
    // (h,3)
    // (h-1,3) + (h-2,3) + (h-3,3) + 2*(2^group) - 1(h if h%3 == 0 need group h/3)

    val dp = Array.fill[Int](1000)(-1)

    dp(0) = 1
    dp(1) = 1
    dp(2) = 2

    def buildTower(height: Int): Int = {
        if(dp(height) != -1)
            dp(height)
        else {
            dp(height) = 
                buildTower(height-1) +
                buildTower(height-2) +
                3 * buildTower(height-3)
                
            dp(height)
        }
    }

    val n = scala.io.StdIn.readInt

    println(buildTower(n))
}