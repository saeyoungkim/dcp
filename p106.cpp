/**
 * @file p106.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Pinterest.

Given an integer list where each number represents the number of hops you can make, determine whether you can reach to the last index starting at index 0.

For example, [2, 0, 1, 0] returns True while [1, 1, 0, 1] returns False.
 */

#include <vector>
#include <iostream>

using namespace std;

vector<int> steps1 = {2,0,1,0};
vector<int> steps2 = {1,1,0,1};

bool solve(const vector<int>& steps) {
    int max_reachable = 0;
    for(int curr = 0; curr <= max_reachable; curr++) {
        if(max_reachable >= steps.size()-1) {
            return true;
        }

        max_reachable = max(max_reachable, curr + steps[curr]);
    }

    return false;
}

int main() {
    cout << boolalpha << solve(steps1) << endl;
    cout << boolalpha << solve(steps2) << endl;
}