/**
 * @file p100.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-22
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

You are in an infinite 2D grid where you can move in any of the 8 directions:

 (x,y) to
    (x+1, y),
    (x - 1, y),
    (x, y+1),
    (x, y-1),
    (x-1, y-1),
    (x+1,y+1),
    (x-1,y+1),
    (x+1,y-1)
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example:

Input: [(0, 0), (1, 1), (1, 2)]
Output: 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
 */

#include <iostream>
#include <vector>

// a1 a2 a3 -> a2^2 -2a1a2 -> a2(a2 - 2a1) + a1^2 -> (a1-a2)^2 
// a1 a3 a2 -> a3^2 -2a1a3 -> a3(a3 - 2a1) + a1^2 -> (a3-a1)^2

// a1 a2 a3 a4 -> (a1-a2)^2 + (a2-a3)^2 + (a3-a4)^2
// a1 a3 a2 a4 -> (a1-a3)^2 + (a2-a3)^2 + (a2-a4)^2
// a1 a3 a4 a2 -> (a1-a3)^2 + (a3-a4)^2 + (a4-a2)^2

using namespace std;

vector<vector<int>> arr = {{0,0}, {1,1}, {1,2}};

int solve(vector<vector<int>>& arr) {
    int count = 0;
    int prev = 0;
    for(int i = 0; i < arr.size(); i++) {
        count += max(abs(arr[i][0] - arr[prev][0]), abs(arr[i][1] - arr[prev][1]));
        prev = i;
    }

    return count;
}

int main() {
    cout << solve(arr) << endl;
}