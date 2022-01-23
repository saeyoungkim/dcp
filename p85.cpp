/**
 * @file p85.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given three 32-bit integers x, y, and b, return x if b is 1 and y if b is 0, using only mathematical or bit operations. You can assume b can only be 1 or 0.
 */
#include <iostream>

using namespace std;

int solve(int x, int y, int b) {
    int B = -b;   

    return (x&B) + (y&(~B));
}

int main() {
    int x = 122;
    int y = -1523;
    int b = 0;
    cout << solve(x,y,b) << endl;
}