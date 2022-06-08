/**
 * @file p233.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Apple.

Implement the function fib(n), which returns the nth number in the Fibonacci sequence, using only O(1) space.
 */

#include <iostream>

using namespace std;

int fib(int n) {
    int curr = 1, prev = 1;

    while(n-- >= 3) {
        int tmp = curr;
        curr += prev;
        prev = tmp;
    }

    return curr;
}

int main() {
    int n;
    cin >> n;

    cout << fib(n) << endl;
}