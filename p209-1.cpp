/**
 * @file p209-1.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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

string lcs(const string& a, const string& b) {
    vector<vector<string>> dp(a.length()+1, vector<string>(b.length()+1, ""));

    for(int i=1; i <= a.length(); i++) {
        for(int j=1; j <= b.length(); j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + a[i-1];
            } else {
                dp[i][j] = dp[i][j-1].length() > dp[i-1][j].length() ? dp[i][j-1] : dp[i-1][j];
            }
        }
    }

    return dp[a.length()][b.length()];
}

int main() {
    string a,b,c;
    cin >> a >> b >> c;

    string ans1 = lcs(a, lcs(b,c));
    string ans2 = lcs(b, lcs(a,c));
    string ans3 = lcs(c, lcs(a,b));

    if(ans1.length() > ans2.length() and ans1.length() > ans3.length()) {
        cout << ans1 << endl;
    } else if(ans2.length() > ans1.length() and ans2.length() > ans3.length()) {
        cout << ans2 << endl;
    } else {
        cout << ans3 << endl;
    }
}