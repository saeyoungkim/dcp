/**
 * @file p42.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2021-11-25
 * 
 * @copyright Copyright (c) 2021
 * 
Given a list of integers S and a target number k, write a function that returns a subset of S that adds up to k. If such a subset cannot be made, then return null.

Integers can appear more than once in the list. You may assume all numbers in the list are positive.

For example, given S = [12, 1, 61, 5, 9, 2] and k = 24, return [12, 9, 2, 1] since it sums up to 24.
 */

#include <iostream>
#include <vector>

std::vector<int> arr;
int N;
int T;

void Input() {
    std::cin >> T;
    std::cin >> N;

    int tmp;
    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }
}

bool _solve(std::vector<int>& ans, int sum, int idx) {
    if(sum == T) {
        return true;
    }

    if(idx == N) {
        return false;
    }

    ans.push_back(arr[idx]);
    bool has_find_with_idx = _solve(ans, sum + arr[idx], idx+1);
    if(has_find_with_idx) {
        return true;
    }
    ans.pop_back();
    bool has_find_without_idx = _solve(ans, sum, idx+1);
    if(has_find_without_idx) {
        return true;
    }

    return false;
}

void Solve() {
    std::vector<int> ans;
    bool find = _solve(ans , 0, 0); // vec , sum , idx
    if(find) {
        std::for_each(ans.begin(), ans.end(), [](const int a) {
            std::cout << a << ", ";
        });
    }
    std::cout << std::endl;
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}