/**
 * @file p60.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Facebook.

Given a multiset of integers, return whether it can be partitioned into two subsets whose sums are the same.

For example, given the multiset {15, 5, 20, 10, 35, 15, 10}, it would return true, since we can split it up into {15, 5, 10, 15, 10} and {20, 35}, which both add up to 55.

Given the multiset {15, 5, 20, 10, 35}, it would return false, since we can't split it up into two subsets that add up to the same sum.
 */

#include <vector>
#include <iostream>

using namespace std;

int N;
vector<int> arr;

void input() {
    cin >> N;
    int tmp;
    while(N--) {
        cin >> tmp;
        arr.push_back(tmp);
    }
}

bool can_make(int idx, int sum, int target) {
    if(idx == arr.size()) {
        return sum == target;
    }

    if(can_make(idx+1, sum+arr[idx], target)) {
        return true;
    }
    if(can_make(idx+1, sum, target)) {
        return true;
    }

    return false;
}

void solve() {
    int target = 0;
    for(auto n : arr) {
        target += n;
    }

    if(target & 1) {
        cout << boolalpha << false << endl;
        return ;
    }

    target >>= 1;

    cout << boolalpha << can_make(0, 0, target) << endl;
}

int main() {
    input();
    solve();
}