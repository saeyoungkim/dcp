/**
 * @file p54.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
This problem was asked by Dropbox.

Sudoku is a puzzle where you're given a partially-filled 9 by 9 grid with digits. The objective is to fill the grid with the constraint that every row, column, and box (3 by 3 subgrid) must contain all of the digits from 1 to 9.

Implement an efficient sudoku solver.
 */

#include <iostream>

using namespace std;

int row_constraints[9];
int col_constraints[9];
int sub_constraints[3][3];

int grid[9][9];

void print(int grid[9][9]) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    cout << "==========================\n";
    cout << endl;
}

void _solve(int r, int c) {
    if(r == 9) {
        print(grid);
        return ;
    }

    int sub_r = r/3, sub_c = c/3;

    int constraints = row_constraints[r] | col_constraints[c] | sub_constraints[sub_r][sub_c];
    for(int i = 0; i < 9; i++) {
        int next = (1 << i);
        if(!(constraints & next)) {
            grid[r][c] = i+1;
            row_constraints[r] ^= next;
            col_constraints[c] ^= next;
            sub_constraints[sub_r][sub_c] ^= next;
            c == 8 ? _solve(r+1, 0) : _solve(r, c+1);
            grid[r][c] = 0;
            row_constraints[r] ^= next;
            col_constraints[c] ^= next;
            sub_constraints[sub_r][sub_c] ^= next;
        }
    }
}

void solve() {
    _solve(0, 0);
}

int main() {
    solve();
}