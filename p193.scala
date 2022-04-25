/**
This problem was asked by Affirm.

Given a array of numbers representing the stock prices of a company in chronological order, write a function that calculates the maximum profit you could have made from buying and selling that stock. You're also given a number fee that represents a transaction fee for each buy and sell transaction.

You must buy before you can sell the stock, but you can make as many transactions as you like.

For example, given [1, 3, 2, 8, 4, 10] and fee = 2, you should return 9, since you could buy the stock at 1 dollar, and sell at 8 dollars, and then buy it at 4 dollars and sell it at 10 dollars. Since we did two transactions, there is a 4 dollar fee, so we have 7 + 6 = 13 profit minus 4 dollars of fees.
*/

object P193 extends App {
    val stocks = Array(1,3,2,8,4,10)

    val dp = Array.fill[Array[Int]](stocks.size)(Array.fill[Int](2)(Int.MinValue))

    def buyAndSellStokcsWithFee(stocks: Array[Int], fee: Int): Int = {
        def _buyAndSellStokcsWithFee(currIdx: Int, holding: Int): Int = {
            if(currIdx == stocks.size)
                0
            else if(dp(currIdx)(holding) != Int.MinValue)
                dp(currIdx)(holding)
            else {
                if(holding == 1)
                    dp(currIdx)(holding) = _buyAndSellStokcsWithFee(currIdx+1, 1) max (_buyAndSellStokcsWithFee(currIdx+1, 0) + stocks(currIdx) - fee)
                else 
                    dp(currIdx)(holding) = _buyAndSellStokcsWithFee(currIdx+1, 0) max (_buyAndSellStokcsWithFee(currIdx+1, 1) - stocks(currIdx))

                dp(currIdx)(holding)
            }
        }

        _buyAndSellStokcsWithFee(0, 0)
    }

    println(buyAndSellStokcsWithFee(stocks, 2))
}