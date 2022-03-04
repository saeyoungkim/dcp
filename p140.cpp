/**
 * @file p140.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given an array of integers in which two elements appear exactly once and all other elements appear exactly twice, find the two elements that appear only once.

For example, given the array [2, 4, 6, 8, 10, 2, 6, 10], return 4 and 8. The order does not matter.

Follow-up: Can you do this in linear time and constant space?
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr = {2,4,6,8,10,2,6,10};

int main() {
    int _xor = 0;
    for(int n : arr) {
        _xor ^= n;
    }

    int l = 1;
    for(int i = 0; i < 32; i++) {
        int count = 0;
        for(int n : arr) {
            if(n & l) {
                count++;
            }
        }

        if(count & 1) {
            break;
        }

        l <<= 1;
    }

    int x,y;
    for(int n : arr) {
        if(l & n) {
            x = n;
            y = _xor ^ x;
            break;
        }
    }

    cout << x << " " << y << endl;
}