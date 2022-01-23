/**
 * @file p101.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-23
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Alibaba.

Given an even number (greater than 2), return two prime numbers whose sum will be equal to the given number.

A solution will always exist. See Goldbach’s conjecture.

Example:

Input: 4
Output: 2 + 2 = 4
If there are more than one solution possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b, and [c, d] is another solution with c <= d, then

[a, b] < [c, d]
If a < c OR a==c AND b < d.
 */
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    vector<bool> primes;

    int n;
    cin >> n;
    primes.resize(n+1, true);

    for(int i = 2; i <= sqrt((double)n); i++) {
        if(not primes[i]) {
            continue;
        }

        for(int j = (i << 1); j <= n; j += i) {
            primes[j] = false;
        }
    }

    for(int i = 2; i <= (n >> 1); i++) {
        if(primes[i] and primes[n-i]) {
            cout << i << " " << n-i << endl;
            break;
        }
    }
}