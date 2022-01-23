/**
 * @file p77.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-30
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Snapchat.

Given a list of possibly overlapping intervals, return a new list of intervals where all overlapping intervals have been merged.

The input list is not necessarily ordered in any way.

For example, given [(1, 3), (5, 8), (4, 10), (20, 25)], you should return [(1, 3), (4, 10), (20, 25)].
 */
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<vector<int>> arr = {{1,3},{5,8},{4,10},{20,25}};

vector<vector<int>> solution1(vector<vector<int>> arr) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    for(auto v : arr) {
        if(res.empty() or res.back()[1] < v[0]) {
            res.push_back(v);
        } else if(res.back()[1] >= v[0]) {
            res.back()[1] = max(v[1], res.back()[1]);
        }
    }

    return res;
}

vector<vector<int>> solution2(vector<vector<int>> arr) {
    map<int, int> interval;

    for(auto v : arr) {
        interval[v[0]]++;
        interval[v[1]]--;
    }

    bool is_first = true;
    int curr = 0;
    vector<vector<int>> res;
    for(auto p : interval) {
        curr += p.second;
        if(curr >= 0 and is_first) {
            res.push_back({p.first, p.first});
            is_first = false;
        } else if(curr == 0 and not is_first) {
            res.back()[1] = p.first;
            is_first = true;
        }
    } 

    return res;
}

int main() {
    cout << "before : " << endl;
    for(auto v : arr) {
        cout << v[0] << " " << v[1] << endl;
    }

    vector<vector<int>> sol1 = solution1(arr);

    cout << "after 1 : " << endl;
    for(auto v : sol1) {
        cout << v[0] << " " << v[1] << endl;
    }  

    vector<vector<int>> sol2 = solution2(arr);

    cout << "after 2 : " << endl;
    for(auto v : sol2) {
        cout << v[0] << " " << v[1] << endl;
    }  
}