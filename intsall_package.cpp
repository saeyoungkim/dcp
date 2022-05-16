/**
 * @file intsall_package.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-14
 * 
 * @copyright Copyright (c) 2022
 * 
 * To install packages of different versions of an Android app, each package has different Android system requirements (only the major version is considered). For example:
v1: min 1.0 max 6.0
v2: min 3.0 max 7.0
v3: min 4.0 max 9.0

Find the Android system from 0.0 -> latest (the interviewer said it is MAX_INTEGER) different Android installation packages supported by each interval, and then only return all intervals:
[0.0, 0.0] [1.0,2.0] [3.0, 6.0] [7.0, 7.0] [8.0, latest] -> return these intervals
none v1 v1,v2 v2 none -> do not need to return
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<vector<int>> lists = {{1,6}, {3,7}, {4,9}};

    map<int,int> c;

    for(const vector<int>& list : lists) {
        c[list[0]] = 1;
        c[list[1]+1] = -1;
    }

    int currVersion = 0;
    int currVersionCount = 0;

    vector<vector<int>> ans;

    // 0  1  2  3  4  5  6  7  8  9
    //    1  1  1  1  1  1
    //          2  2  2  2  2
    //             3  3  3  3  3  3

    for(auto p : c) {
        if(currVersionCount == 1 && p.second == 1) {
            ans.push_back({currVersion, p.first-1});
        } else if(currVersionCount == 1 && p.second == -1) {
            ans.push_back({currVersion, p.first-1});
        }

        currVersionCount += p.second;
        currVersion = p.first;
    }

    for_each(ans.begin(), ans.end(), [](const vector<int>& list) {
        cout << list[0] << " " << list[1] << endl;
    });
}