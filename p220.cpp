/**
 * @file p220.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Square.

In front of you is a row of N coins, with values v1, v1, ..., vn.

You are asked to play the following game. You and an opponent take turns choosing either the first or last coin from the row, removing it from the row, and receiving the value of the coin.

Write a program that returns the maximum amount of money you can win with certainty, if you move first, assuming your opponent plays optimally.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> dp; // dp[l][r][t] (t = 0 or 1) => get Max when t player can choose l ~ r

int getMaxDiff(vector<int>& coins, int l, int r, int t) {
    if(l > r) return 0;
    else if(dp[l][r][t]) return dp[l][r][t];

    int leftChoose = getMaxDiff(coins, l+1, r, t^1);
    int rightChoose = getMaxDiff(coins, l, r-1, t^1);

    dp[l][r][t] = max(coins[l] - leftChoose, coins[r] - rightChoose);

    return dp[l][r][t];
}

int main() {
    int N;
    cin >> N;

    vector<int> coins(N);
    int sum = 0;
    for(int i=0; i<N; i++) {
        cin >> coins[i];
        sum += coins[i];
    }

    dp.resize(N, vector<vector<int>>(N, vector<int>(2, 0)));

    for(int i=0; i<N; i++) {
        for(int t=0; t<2; t++) {
            dp[i][i][t] = coins[i];
        }
    }

    int diff = getMaxDiff(coins, 0, N-1, 0);

    int money = ((sum - diff) >> 1) + diff;

    cout << money << endl;
}



