/**
 * @file p42_2.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2021-11-25
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Google.

Given a list of integers S and a target number k, write a function that returns a subset of S that adds up to k. If such a subset cannot be made, then return null.

Integers can appear more than once in the list. You may assume all numbers in the list are positive.

For example, given S = [12, 1, 61, 5, 9, 2] and k = 24, return [12, 9, 2, 1] since it sums up to 24.
 */
#include <iostream>
#include <vector>

std::vector<int> arr;
int N, T;

void Input() {
    std::cin >> T;
    std::cin >> N;

    int tmp;
    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }
}

void Solve() {
    std::vector<std::vector<std::vector<int> > > memo(N+1, std::vector<std::vector<int> >(T+1, std::vector<int>({})));

    for(int idx = 1; idx <= N; idx++) {
        int last = arr[idx-1];
        for(int t = 1; t <= T; t++) {
            if(last == t){
                memo[idx][t] = {last};
            } else if(last < t && !memo[idx-1][t-last].empty()) {
                std::vector<int> tmp = memo[idx-1][t-last];
                tmp.push_back(last);
                memo[idx][t] = tmp;
            } else {
                memo[idx][t] = memo[idx-1][t];
            }
        }
    }

    std::vector<int> ans = memo[N][T];
    for(auto v : ans) {
        std::cout << v << ", ";
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