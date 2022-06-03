/**
 * @file p224.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-29
 * 
 * @copyright Copyright (c) 2022
 * This problem was asked by Amazon.

Given a sorted array, find the smallest positive integer that is not the sum of a subset of the array.

For example, for the input [1, 2, 3, 10], you should return 7.

Do this in O(N) time.
 */

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> arr = {1,2,2,10};

    int maxSum = 0;

    for(int num : arr) {
        if(maxSum+1 < num) {
            cout << maxSum+1 << endl;
            break;
        }

        maxSum += num;
    }
}