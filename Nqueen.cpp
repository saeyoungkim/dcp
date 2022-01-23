#include <iostream>
#include <vector>
#include <bitset>

int findNQueenBoard(int board[], int N, int i) {
    if(i == N) return 1;
    // 1. in not same col => if bit[j] == true pass
    // 2. in not same row => for loop means there is only one value in row
    // 3. in not diagnostic
    int ret = 0;

    // in not same row => for loop means there is only one value in row
    for(int col = 0; col < N; ++col){

        bool is_Ok = true;

        for(int check_col = 0; check_col < N && i > 0; ++check_col){
            // in not same col => if bit[j] == true pass
            if(check_col == col && board[check_col] >= 0){
                is_Ok = false;
                break;
            }
            // in not diagnostic
            int row_distance = i - board[check_col];
            if(board[check_col] >= 0 && std::abs(check_col - col) == row_distance){
                is_Ok = false;
                break;
            }
        }

        if(is_Ok){
            board[col] = i;
            ret += findNQueenBoard(board, N, i+1);
            board[col] = -1;
        }
    }

    return ret;
}

int main(void) {
#define N 8

    int board[N];

    for(int i = 0; i < N; ++i) board[i] = -1;

    // for(int i = 0; i < N; ++i) {
    //     std::cout << board[i] << " ";
    // }

    // std::cout << std::endl;

    std::cout << findNQueenBoard(board, N, 0) << std::endl;
    return 0;
}