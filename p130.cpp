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

vector<vector<vector<int>>> dp;

int maxKBuyAndSellStocks(const vector<int>& arr, int idx, int has_stock, int k) {
    if(k == 0) {
        return 0;
    } else if(idx == arr.size()) {
        return INT_MIN;
    }

    if(dp[idx][has_stock][k] == -1) {
        if(has_stock) {
            int withSell = maxKBuyAndSellStocks(arr,idx+1,0,k-1);
            int withoutSell = maxKBuyAndSellStocks(arr, idx+1, 1, k);
            if(withSell == INT_MIN and withoutSell == INT_MIN) {
                dp[idx][has_stock][k] = INT_MIN;
            } else if(withSell == INT_MIN) {
                dp[idx][has_stock][k] = withoutSell;
            } else if(withoutSell == INT_MIN) {
                dp[idx][has_stock][k] = arr[idx] + withSell;
            } else {
                dp[idx][has_stock][k] = max(arr[idx] + withSell, withoutSell);
            }
        } else {
            int withBuy = maxKBuyAndSellStocks(arr,idx+1,1,k);
            int withoutBuy = maxKBuyAndSellStocks(arr, idx+1, 0, k);
            if(withBuy == INT_MIN and withoutBuy == INT_MIN) {
                dp[idx][has_stock][k] = INT_MIN;
            } else if(withBuy == INT_MIN) {
                dp[idx][has_stock][k] = withoutBuy;
            } else if(withoutBuy == INT_MIN) {
                dp[idx][has_stock][k] = -arr[idx] + withBuy;
            } else {
                dp[idx][has_stock][k] = max(-arr[idx] + withBuy, withoutBuy);
            }
        }
    }

    return dp[idx][has_stock][k];
}

int main() {
    vector<int> arr = {0,7,5,20,10,23,26,41,63,2,43,2,15,43,63,25,22,166,23};

    int k;
    cin >> k;

    dp.resize(arr.size());
    for(int i = 0; i < arr.size(); i++) {
        dp[i].resize(2);
        for(int j = 0; j < 2; j++) {
            dp[i][j].resize(k+1,-1);
        }
    }


    int ans = maxKBuyAndSellStocks(arr, 0, 0, k);

    if(ans == INT_MIN) {
        cout << "cannnot get profit" << endl;
    } else {
        cout << ans << endl;
    }
}