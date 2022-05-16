/**
 * @file p210.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * A Collatz sequence in mathematics can be defined as follows. Starting with any positive integer:

if n is even, the next number in the sequence is n / 2
if n is odd, the next number in the sequence is 3n + 1
It is conjectured that every such sequence eventually reaches the number 1. Test this conjecture.

Bonus: What input n <= 1000000 gives the longest sequence?
 */

#include <iostream>

using namespace std;

int dp[3000001] = {0};

int getCollatzLen(int n) {
    if(dp[n] > 0)
        return dp[n];
    else if(n == 1)
        return 1;
    
    dp[n] = ((n&1) == 0 ? getCollatzLen(n >> 1) : getCollatzLen(3*n + 1)) + 1;

    return dp[n]; 
}

int main() {
    int ans = 0;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        ans = max(ans, getCollatzLen(i));
    }

    cout << ans << endl;
}