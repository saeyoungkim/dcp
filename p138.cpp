/**
 * @file p138.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Find the minimum number of coins required to make n cents.

You can use standard American denominations, that is, 1¢, 5¢, 10¢, and 25¢.

For example, given n = 16, return 3 since we can make it with a 10¢, a 5¢, and a 1¢.
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> coins = {25,10,5,1};

int minimumCoins(int n) {
    int ret = 0;
    
    for(int coin : coins) {
        ret += n / coin;
        n %= coin;
    }

    return ret;
}

int main() {
    int n;
    cin >> n;

    cout << minimumCoins(n) << endl;
}