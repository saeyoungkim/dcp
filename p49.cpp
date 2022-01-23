/**
 * @file p49.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Amazon.

Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

For example, given the array [34, -50, 42, 14, -5, 86], the maximum sum would be 137, since we would take elements 42, 14, -5, and 86.

Given the array [-5, -1, -8, -9], the maximum sum would be 0, since we would not take any elements.

Do this in O(N) time.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int N;

void input() {
    cin >> N;
    int tmp;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        arr.push_back(tmp);
    }
}

void solve() {
    int curr_sum = 0;
    int ans = 0;
    for(int i = 0; i < N; i++) {
        if(curr_sum + arr[i] > 0) {
            curr_sum += arr[i];
            ans = max(ans,curr_sum);
        } else {
            ans = max(ans, curr_sum);
            curr_sum = 0;
        }
    }

    cout << ans << endl;
    return ;
}

int main(void) {
    input();
    solve();
}