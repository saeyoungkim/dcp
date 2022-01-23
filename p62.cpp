/**
 * @file p62.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Facebook.

There is an N by M matrix of zeroes. Given N and M, write a function to count the number of ways of starting at the top-left corner and getting to the bottom-right corner. You can only move right or down.

For example, given a 2 by 2 matrix, you should return 2, since there are two ways to get to the bottom-right:

Right, then down
Down, then right
Given a 5 by 5 matrix, there are 70 ways to get to the bottom-right.
 */
#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> ways;

void input() {
    cin >> N >> M;
    ways.resize(N);
    for(int i = 0; i < N; i++) {
        ways[i].resize(M, 0);
    }
}

int solve(int r, int c) {
    if (r == N-1 && c == M-1) {
        return 1;
    }

    if (r >= N || c >= M) {
        return 0;
    }

    if(ways[r][c]) {
        return ways[r][c];
    }

    ways[r][c] = solve(r+1,c) + solve(r, c+1);

    return ways[r][c];
}

int main() {
    input();
    cout << solve(0, 0) << endl;;
}