/**
 * @file p122.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 * This question was asked by Zillow.

You are given a 2-d matrix where each cell represents number of coins in that cell. Assuming we start at matrix[0][0], and can only move right or down, find the maximum number of coins you can collect by the bottom right corner.

For example, in this matrix

0 3 1 1
2 0 0 4
1 5 3 1
The most we can collect is 0 + 2 + 1 + 5 + 3 + 1 = 12 coins.
 */

#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> paths = {
    {0,3,1,1},
    {2,0,0,4},
    {1,5,3,1}
};

int _most_collect_coins(const vector<vector<int>>& paths, vector<vector<int>>& dp, int r, int c) {
    if(r >= paths.size() or c >= paths.front().size()) {
        return INT_MIN;
    }

    if(dp[r][c] == -1) {
        int most_coins = max(_most_collect_coins(paths,dp,r+1,c),_most_collect_coins(paths,dp,r,c+1));

        dp[r][c] = most_coins + paths[r][c];
    }

    return dp[r][c];
}

int most_collect_coins(const vector<vector<int>>& paths) {
    vector<vector<int>> dp = paths;
    for(auto& it_o : dp) {
        for(auto& it_i : it_o) {
            it_i = -1;
        }
    }
    
    dp.back().back() = paths.back().back();

    return _most_collect_coins(paths, dp, 0, 0);
}

int main() {
    cout << most_collect_coins(paths) << endl;
}