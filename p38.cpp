#include <iostream>
#include <vector>

/**
 * @brief 
 * This problem was asked by Microsoft.

You have an N by N board. Write a function that, given N, returns the number of possible arrangements of the board where N queens can be placed on the board without threatening each other, i.e. no two queens share the same row, column, or diagonal.
 */

int N;

std::vector<int> can_place;

void Input() {
    std::cin >> N;
    can_place = std::vector<int>(N, -1);
}

int Solve(int N, int idx) {
    if(idx == N) {
        return 1;
    }

    int ret = 0;
    for(int i = 0; i < N; i++) {
        // can_place[i] == -1 => column check
        // i - idx >= 0  && can_place[i-idx] == -1 => diagnoal check
        bool check_col = true; 
        if(can_place[i] != -1) {
            check_col = false;
        }
        bool check_left_diag = true;
        for(int j = 0; j <= std::min(i,idx); j++) {
            if(can_place[i-j] == idx-j) {
                check_left_diag = false;
                break;
            }
        }
        bool check_right_diag = true;
        for(int j = 0; j <= std::min(N-1-i, idx); j++) {
            if(can_place[i+j] == idx-j) {
                check_left_diag = false;
                break;
            }
        }

        if(check_col && check_left_diag && check_right_diag) {
            can_place[i] = idx;
            ret += Solve(N, idx+1);
            can_place[i] = -1;
        }
    }

    return ret;
}

void solve() {
    Input();
    std::cout << Solve(N, 0) << std::endl;;
}

int main(void) {
    solve();
}