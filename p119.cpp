/**
 * @file p119.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a set of closed intervals, find the smallest set of numbers that covers all the intervals. If there are multiple smallest sets, return any of them.

For example, given the intervals [0, 3], [2, 6], [3, 4], [6, 9], one set of numbers that covers all these intervals is {3, 6}.
 */

#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<vector<int>> arr= {{0,3},{2,6},{3,4}};

int main() {
    sort(arr.begin(), arr.end());

    int st = arr[0][1];
    int ed = arr[0][1];

    for(auto interval : arr) {
        if(interval[0] >= ed) {
            ed = interval[0];
        } else if(interval[1] <= st) {
            st = ed = interval[1];
        }
    }

    cout << st << " " << ed << endl;
}