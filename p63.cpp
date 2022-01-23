/**
 * @file p63.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Microsoft.

Given a 2D matrix of characters and a target word, write a function that returns whether the word can be found in the matrix by going left-to-right, or up-to-down.

For example, given the following matrix:

[['F', 'A', 'C', 'I'],
 ['O', 'B', 'Q', 'P'],
 ['A', 'N', 'O', 'B'],
 ['M', 'A', 'S', 'S']]
and the target word 'FOAM', you should return true, since it's the leftmost column. Similarly, given the target word 'MASS', you should return true, since it's the last row.
 */
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int R, C;
vector<vector<char>> mat;

vector<vector<unordered_set<string>>> can_not_make;
string s;

void input() {
    cin >> R >> C;

    mat.resize(R);
    can_not_make.resize(R);
    for(int i = 0; i < R; i++) {
        mat[i].resize(C);
        can_not_make[i].resize(C);
    }

    char tmp;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> tmp;
            mat[i][j] = tmp;
        }
    }

    cin >> s;

    cout << "== READ-IN FINISH ==" << endl;
}

bool _solve(const string& s, int idx, int r, int c) {
    if(idx == s.length()) {
        return true;
    }

    if(r == R || c == C) {
        return false;
    }

    string sub = s.substr(idx);

    if(can_not_make[r][c].count(sub)) {
        return false;
    }

    
    if(s[idx] == mat[r][c]) {   
        bool to_right = _solve(s, idx+1, r, c+1);
        if(to_right) {
            return true;
        }

        bool to_down = _solve(s, idx+1, r+1, c);
        if(to_down) {
            return true;
        }
    }

    can_not_make[r][c].insert(sub);
    return false;
}

void solve() {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(_solve(s, 0, i, j)) {
                cout << "Yes" << endl;
                return ;
            }
        }
    }
    cout << "No" << endl;
}

int main() {
    input();
    solve();
}