/**
 * @file p56.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-09
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Google.

Given an undirected graph represented as an adjacency matrix and an integer k, write a function to determine whether each vertex in the graph can be colored such that no two adjacent vertices share the same color using at most k colors.


 */

#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<bool> > adj_matrix;
vector<int> color;
int k;

void input() {
    cin >> k >> N;

    adj_matrix.resize(N);
    for(int i = 0; i < N; i++) {
        adj_matrix[i].resize(N);
    }

    color.resize(N, -1);
    for(int i = 0; i < N; i++) {
        bool tmp;
        for(int j = i+1; j < N; j++) {
            cin >> tmp;
            adj_matrix[i][j] = tmp;
            adj_matrix[j][i] = tmp;
        }
    }
}

bool is_valid(int r, int c) {
    for(int i = 0; i < N; i++) {
        if(adj_matrix[r][i] && color[i] == c) {
            return false;
        }
    }

    return true;
}

bool can_color(int r) {
    if(color[r] >= 0) {
        return true;
    }

    bool can_clr = false;
    for(int c = 0; c < k; c++) {
        if(is_valid(r, c)) {
            color[r] = c;
            for(int j = 0; j < N; j++) {
                if(adj_matrix[r][j]) {
                    bool n = can_color(j);
                    if(!n) {
                        return false;
                    }
                    can_clr = true;
                }
            }

            color[r] = -1;
        }
    }

    return can_clr;
}

bool can_color_easy(int r) {
    if(r == N) {
        return true;
    }

    for(int c = 0; c < k; c++) {
        if(is_valid(r, c)) {
            color[r] = c;

            if(can_color_easy(r+1)) return true;

            color[r] = -1;
        }
    }

    return false;
}


void solve() {
    for(int i = 0; i < N; i++) {
        if(!can_color(i)) {
            cout << "NO" << endl;
            return ;
        }
    }

    cout << "YES" << endl;
    return ;
}

int main(void) {
    input();
    solve();
}