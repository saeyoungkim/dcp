/**
 * @file p65.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-18
 * 
 * @copyright Copyright (c) 2021
 * 
 spiral matrix
 */

#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> matrix = 
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

vector<int> _spiralOrder(vector<vector<int>>& matrix, int r, int c, int R, int C) {
    vector<int> ret;
    if(R == 1) {
        for(int j = c; j < c+C; j++) {
            ret.push_back(matrix[r][j]);
        }
    } else if(C == 1) {
        for(int i = r; i < r+R; i++) {
            ret.push_back(matrix[i][c]);
        }
    } else {
        int i = r;
        int j = c;
        for(; j < c+C-1; j++) {
            ret.push_back(matrix[i][j]);
        }
        for(; i < r+R-1; i++) {
            ret.push_back(matrix[i][j]);
        }
        for(; j > c; j--) {
            ret.push_back(matrix[i][j]);
        }
        for(; i > r; i--) {
            ret.push_back(matrix[i][j]);
        }

    }
    
    return ret;
    
}
    
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r = 0, c = 0;
    int R = matrix.size(), C = matrix.front().size();
    vector<int> ans;
    while(R > 0 && C > 0) {
        vector<int> outer = _spiralOrder(matrix, r, c, R, C);
        for(auto e : outer) {
            ans.push_back(e);
        }
        r++;
        c++;
        R -= 2;
        C -= 2;
    }
    
    return ans;
}

int main() {
    vector<int> ans = spiralOrder(matrix);
    for_each(ans.begin(), ans.end(), [](const int a) {
        cout << a << endl;
    });
}