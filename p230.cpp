/**
 * @file p230.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Goldman Sachs.

You are given N identical eggs and access to a building with k floors. Your task is to find the lowest floor that will cause an egg to break, if dropped from that floor. Once an egg breaks, it cannot be dropped again. If an egg breaks when dropped from the xth floor, you can assume it will also break when dropped from any floor greater than x.

Write an algorithm that finds the minimum number of trial drops it will take, in the worst case, to identify this floor.

For example, if N = 1 and k = 5, we will need to try dropping the egg at every floor, beginning with the first, until we reach the fifth floor, so our solution will be 5.
 */

#include <iostream>
#include <vector>

using namespace std;

int minCount(int N, int k) {
    if(k == 0)
        return 0;
    else if(N == 0)
        return 2000000000;
    
    int ans = INT_MAX;
    for(int x = 1; x <= k; x++) {
        ans = min(ans, 1 + max(minCount(N-1, x-1), minCount(N, k-x)));
    }

    return ans;
}

int minCount2(int N, int k) {
    vector<vector<int>> dp(N+1, vector<int>(k+1, 200000));

    for(int i=1; i<=N; i++) {
        dp[i][0] = 0;
    }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=k; j++) {
            for(int x=1; x<=j; x++) {
                dp[i][j] = min(dp[i][j], 1 + max(dp[i-1][x-1], dp[i][j-x]));
            }
        }
    }

    return dp[N][k];
}

int main() {
    int N, k;
    cin >> N >> k;

    cout << minCount(N, k) << endl;
    cout << minCount2(N, k) << endl;
}