/**
 * @file p84.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * Given a matrix of 1s and 0s, return the number of "islands" in the matrix. A 1 represents land and 0 represents water, so an island is a group of 1s that are neighboring whose perimeter is surrounded by water.

For example, this matrix has 4 islands.

1 0 0 0 0
0 0 1 1 0
0 1 1 0 0
0 0 0 0 0
1 1 0 0 1
1 1 0 0 1
 */

#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> dirs = {{0,-1},{0,1},{1,0},{-1,0}};

void dfs(vector<vector<int>>& islands, int i, int j) {
    islands[i][j] = 0;

    for(auto dir : dirs) {
        int n_i = dir[0] + i;
        int n_j = dir[1] + j;

        if(n_i >= 0 and n_j >= 0 and n_i < islands.size() and n_j < islands.front().size() and islands[n_i][n_j]) {
            dfs(islands,n_i,n_j);
        }
    }
}

int count(vector<vector<int>> islands) {
    int ret = 0;

    for(int i = 0; i < islands.size(); i++) {
        for(int j = 0; j < islands.front().size(); j++) {
            if(islands[i][j]) {
                dfs(islands,i,j);
                ret++;
            }
        }
    }

    return ret;
}

int main() {
    vector<vector<int>> islands = 
    {
        {1,0,0,0,0},
        {1,1,1,1,0},
        {0,1,1,0,0},
        {0,0,0,0,0},
        {1,1,0,0,1},
        {1,1,0,0,1}
    };

    cout << count(islands) << endl;
}