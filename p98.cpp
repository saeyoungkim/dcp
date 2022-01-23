/**
 * @file p98.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Coursera.

Given a 2D board of characters and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

For example, given the following board:

[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]
exists(board, "ABCCED") returns true, exists(board, "SEE") returns true, exists(board, "ABCB") returns false.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> grids = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};

bool dfs(int i, int j, const string& str, int idx) {
    if(idx == str.length()){
        return true;
    }

    if(i < 0 or j < 0 or i >= grids.size() or j >= grids.front().size() or grids[i][j] != str[idx]) {
        return false;
    }

    char c = grids[i][j];
    grids[i][j] = '.';

    bool b = dfs(i+1,j,str,idx+1) | dfs(i,j+1,str,idx+1) | dfs(i-1,j,str,idx+1) | dfs(i,j-1,str,idx+1);

    grids[i][j] = c;

    return b;
}

bool find(const string& str) {
    for(int i = 0; i < grids.size(); i++) {
        for(int j = 0; j < grids.front().size(); j++) {
            if(dfs(i,j,str,0)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    cout << boolalpha << find("ABCCED") << endl;
    cout << boolalpha << find("SEE") << endl;
    cout << boolalpha << find("ABCB") << endl;
}