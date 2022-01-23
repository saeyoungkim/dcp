/**
 * @file p75.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-28
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Microsoft.

Given an array of numbers, find the length of the longest increasing subsequence in the array. The subsequence does not necessarily have to be contiguous.

For example, given the array [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15], the longest increasing subsequence has length 6: it is 0, 2, 6, 9, 11, 15.
 */

// 1. dynamic programming
#include <vector>
#include <iostream>

using namespace std;

vector<int> arr = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};

int solution1(const vector<int>& arr) {
    vector<int> dp(arr.size());
    dp[0] = 1;
    for(int i = 1; i < arr.size(); i++) {
        for(int j = i-1; j >= 0; j--) {
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    return dp[arr.size()-1];
}

int main() {
    cout << solution1(arr) << endl;
}