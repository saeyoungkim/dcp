/**
 * @file p243.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Etsy.

Given an array of numbers N and an integer k, your task is to split N into k partitions such that the maximum sum of any partition is minimized. Return this sum.

For example, given N = [5, 1, 2, 7, 3, 4] and k = 3, you should return 8, since the optimal partition is [5, 1, 2], [7], [3, 4].
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int _getMinPartition(vector<int>& arr, int idx, int k, vector<unordered_map<int,int>>& dp) {
    if(idx == arr.size() or k == 0) return INT_MAX;
    else if(dp[idx].count(k)) return dp[idx][k];

    int sum = 0;
    int ret = INT_MAX;
    for(int j=idx; j < arr.size(); j++) {
        sum += arr[j];
        int next = _getMinPartition(arr, j+1, k-1, dp);
        if(next != INT_MAX) ret = min(ret, max(sum,next));
    }

    return dp[idx][k] = ret;
}

int getMinPartition(vector<int>& arr, int k) {
    vector<unordered_map<int,int>> dp(arr.size());

    int sum=0;
    for(int i=arr.size()-1; i>=0; i--) {
        sum += arr[i];
        dp[i][1] = sum;
    }

    return _getMinPartition(arr, 0, k, dp);
}

int main() {
    vector<int> arr = {5,1,2,7,3,4};
    int k;
    cin >> k;

    cout << getMinPartition(arr, k) << endl;
}