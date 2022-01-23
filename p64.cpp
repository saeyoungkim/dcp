/**
 * @file p64.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-17
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Google.

A knight's tour is a sequence of moves by a knight on a chessboard such that all squares are visited once.

Given N, write a function to return the number of knight's tours on an N by N chessboard.
 */
#include <iostream>
#include <bitset>

using namespace std;

int N;
unsigned long long ALL;

bitset<64> board;

void input() {
    cin >> N;
    if(N*N == 64) {
        ALL = (unsigned long long)(-1);
    } else {
        ALL = ((unsigned long long)1 << N*N) - 1;
    }
}

int _solve(int r, int c) {
    if(r < 0 || c < 0 || r >= N || c >= N) {
        return 0;
    }

    cout  << r << " " << c << endl;

    unsigned long long curr_board = board.to_ullong();

    if(curr_board == ALL) {
        return 1;
    }

    board.set(r*N + c);

    int count = 0;
    if(r > 0) {
        if(c+2 < N && !board[(r-1)*N + c + 2]) {
            count += _solve(r-1, c+2);
        }
        if(c-2 >= 0 && !board[(r-1)*N + c - 2]) {
            count += _solve(r-1, c-2);
        }
    }
    if(r > 1) {
        if(c+1 < N && !board[(r-2)*N + c + 1]) {
            count += _solve(r-2, c+1);
        }
        if(c-1 >= 0 && !board[(r-2)*N + c - 1]) {
            count += _solve(r-2, c-1);
        }
    }
    if(r+1 < N) {
        if(c+2 < N && !board[(r+1)*N + c + 2]) {
            count += _solve(r+1, c+2);
        }
        if(c-2 >= 0 && !board[(r+1)*N + c - 2]) {
            count += _solve(r+1, c-2);
        }
    }
    if(r+2 < N) {
        if(c+1 < N && !board[(r+2)*N + c + 1]) {
            count += _solve(r+2, c+1);
        }
        if(c-1 >= 0 && !board[(r+2)*N + c - 1]) {
            count += _solve(r+2, c-1);
        }
    }

    board.reset(r*N + c);

    return count;
}

void solve() {
    cout << ALL << endl;

    int sum = 0;
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 1; j++) {
            sum += _solve(i,j);
        }
    }

    cout << sum << endl;
}

int main() {
    input();
    solve();
}