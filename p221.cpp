/**
 * @file p221.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Zillow.

Let's define a "sevenish" number to be one which is either a power of 7, or the sum of unique powers of 7. The first few sevenish numbers are 1, 7, 8, 49, and so on. Create an algorithm to find the nth sevenish number.
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int base = 1;
    int sum = 0;
    while(n) {
        if(n & 1) sum += base;
        base *= 7;
        n >>= 1;
    }

    cout << sum << endl;
}