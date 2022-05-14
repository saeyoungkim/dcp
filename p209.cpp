/**
 * @file p209.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-14
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by YouTube.

Write a program that computes the length of the longest common subsequence of three given strings. For example, given "epidemiologist", "refrigeration", and "supercalifragilisticexpialodocious", it should return 5, since the longest common subsequence is "eieio".
 */
#include <iostream>
#include <vector>

using namespace std;

int lcs(const string& a, const string& b, const string& c) {
    vector<vector<vector<int>>> dp(a.length()+1, vector<vector<int>>(b.length()+1, vector<int>(c.length()+1, 0)));

    for(int i=1; i <= a.length(); i++) {
        for(int j=1; j <= b.length(); j++) {
            for(int k=1; k <= c.length(); k++) {
                if(a[i-1] == b[j-1] and b[j-1] == c[k-1]) 
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                else {
                    dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
                }
            }
        }
    }

    return dp[a.length()][b.length()][c.length()];
}

int main() {
    string a,b,c;
    cin >> a >> b >> c;

    int ans = lcs(a, b, c);

    cout << ans << endl;
}