/**
 * @file p70.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Microsoft.

A number is considered perfect if its digits sum up to exactly 10.

Given a positive integer n, return the n-th perfect number.

For example, given 1, you should return 19. Given 2, you should return 28.
 */

 // 19 28 37 .. 73 82 91 => 9
 // 109 118 ... 181 190 => 10
 // 208 217 ... 271 280 => 9
 // 307 316 ... 361 370 => 8
 // 901 910 => 2
 // 1009
#include <iostream>

using namespace std;

bool is_sum_up_to_10(int p) {
    int k = 0;
    while(p) {
        k += p % 10;
        p /= 10;
    }

    return k == 10;
}

int main() {
    int n = 1;
    int p = 19;
    int count;
    cin >> count;

    while (n < count) {
        if(is_sum_up_to_10(++p)) {
            n++;
        }
    }

    cout << p << endl;
}