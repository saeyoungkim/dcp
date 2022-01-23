#include <iostream>
#include <vector>

/**
 * This problem was asked by Google.
 * You are given an M by N matrix consisting of booleans that represents a board. 
 * Each True boolean represents a wall. Each False boolean represents a tile you can walk on.
 * Given this matrix, a start coordinate, and an end coordinate, 
 * return the minimum number of steps required to reach the end coordinate from the start. 
 * If there is no possible path, then return null. You can move up, left, down, and right. 
 * You cannot move through walls. You cannot wrap around the edges of the board.
 **/

#define MIN(a,b,c,d) std::min((a), std::min((b), std::min((c), (d))))

int minimum_step(const std::vector<std::vector<bool>>& board,
    int curr_row, int curr_col,
    const int start_row, const int start_col,
    const int end_row, const int end_col,
    std::vector<std::vector<bool>>& is_visiting)
{

    // out of range
    if(curr_row < 0 || curr_row >= (int)board.size()) return INT_MAX;
    if(curr_col < 0 || curr_col >= (int)board.front().size()) return INT_MAX;

    // wall
    if(board[curr_row][curr_col]) return INT_MAX;

    // end
    if((curr_row == end_row) && (curr_col == end_col)) return 0;

    // is_Visiting
    if(is_visiting[curr_row][curr_col]) return INT_MAX;

    is_visiting[curr_row][curr_col] = true;

    int left_minimum_step = minimum_step(board, curr_row, curr_col-1, start_row, start_col, end_row, end_col, is_visiting);
    int right_minimum_step = minimum_step(board, curr_row, curr_col+1, start_row, start_col, end_row, end_col, is_visiting);
    int up_minimum_step = minimum_step(board, curr_row-1, curr_col, start_row, start_col, end_row, end_col, is_visiting);
    int down_minimum_step = minimum_step(board, curr_row+1, curr_col, start_row, start_col, end_row, end_col, is_visiting);

    is_visiting[curr_row][curr_col] = false;

    int minimum_step = MIN(left_minimum_step, right_minimum_step, up_minimum_step, down_minimum_step);

    return minimum_step == INT_MAX ? INT_MAX : minimum_step + 1;
}

int main(void){
    std::vector<std::vector<bool>> board(
    {
        {false, false, false, false},
        {true, true, true, false},
        {false, false, false, false},
        {false, false, false, false}
    }
    );

    std::vector<std::vector<bool>> is_visiting(
    {
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false}
    }
    );

    int start_row = 3, start_col = 0, end_row = 0, end_col = 0;

    std::cout << minimum_step(board, start_row, start_col, start_row, start_col, end_row, end_col, is_visiting) << std::endl;
}