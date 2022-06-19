/**
 * @file p245.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Yelp.

You are given an array of integers, where each element represents the maximum number of steps that can be jumped going forward from that element. Write a function to return the minimum number of jumps you must take in order to get from the start to the end of the array.

For example, given [6, 2, 4, 0, 5, 1, 1, 4, 2, 9], you should return 2, as the optimal solution involves jumping from 6 to 5, and then from 5 to 9.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);

    for(int& n : arr) cin >> n;

    int ans = 0;
    int i=0;
    int m=0;

    while(i <= m and m < N-1) {
        int tmp = m;
        for(; i<=m; i++) {
            tmp = max(i+arr[i], tmp);
        }

        ans++;
        m = tmp;
    }

    cout << (m < N-1 ? -1 : ans) << endl;
}