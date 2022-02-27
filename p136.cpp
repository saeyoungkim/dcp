/**
 * @file p136.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * This question was asked by Google.

Given an N by M matrix consisting only of 1's and 0's, find the largest rectangle containing only 1's and return its area.

For example, given the following matrix:

[[1, 0, 0, 0],
 [1, 0, 1, 1],
 [1, 0, 1, 1],
 [0, 1, 0, 0]]
Return 4.
 */

#include <vector>
#include <iostream>

using namespace std;

int largestRectangle(const vector<vector<int>>& arr) {
    vector<vector<int>> accs;

    for(auto row : arr) {
        int sum = 0;
        accs.push_back({});
        for(int v : row) {
            if(v == 0) {
                sum = 0;
            } else {
                sum++;
            }
            accs.back().push_back(sum);
        }
    }

    int ans = 0;
    for(int c = 0; c < accs.front().size(); c++) {
        int r = 0;

        int depth = 0;
        int width = INT_MAX;

        while(r < accs.size()) {
            if(accs[r][c] == 0) {
                depth = 0;
                width = INT_MAX;
            } else {
                depth++;
                width = min(width, accs[r][c]);
                ans = max(ans, depth*width);
            }
            r++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1,0,0,0},
        {1,1,1,1},
        {1,0,1,1},
        {0,1,1,1}
    };

    cout << largestRectangle(arr) << endl;
}