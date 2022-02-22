/**
 * @file p130.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given an array of numbers representing the stock prices of a company in chronological order and an integer k, return the maximum profit you can make from k buys and sells. You must buy the stock before you can sell it, and you must sell the stock before you can buy it again.

For example, given k = 2 and the array [5, 2, 4, 0, 1], you should return 3.
 */

#include <vector>
#include <iostream>

using namespace std;
int main() {
    vector<int> prices = {5,2,4,0,1};

    int k;
    cin >> k;

    vector<vector<int>> dp(prices.size(), vector<int>(k+1, 0));

    for(int i = 1; i <= k; i++) {
        int best_so_far = -prices[0];
        for(int j = 1; j < prices.size(); j++) {
            dp[i][j] = max(dp[i][j-1], best_so_far + prices[j]);
            best_so_far = max(best_so_far, dp[i-1][j] - prices[j]);
        }
    }

    cout << dp[k][prices.size()-1] << endl;
}