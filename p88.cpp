/**
 * @file p88.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 This question was asked by ContextLogic.

Implement division of two positive integers without using the division, multiplication, or modulus operators. Return the quotient as an integer, ignoring the remainder.


 */
#include <iostream>

using namespace std;

int division(int x, int y) {
    if(y == 0) {
        cerr << "division by 0 is invalid operation." << endl;
        exit(1);
    }

    if(x < y) {
        return 0;
    }

    int quot = 1;
    int tmp = y;
    while(x >= tmp) {
        tmp <<= 1;
        quot <<= 1;
    }

    return (quot >> 1) + division(x - (tmp >> 1), y);
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << division(x,y) << endl;
}