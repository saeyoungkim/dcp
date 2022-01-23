/**
 * @file p99.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

For example, given [100, 4, 200, 1, 3, 2], the longest consecutive element sequence is [1, 2, 3, 4]. Return its length: 4.

Your algorithm should run in O(n) complexity.
 */

#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_map<int,int> from_left;
unordered_map<int,int> from_right;
unordered_set<int> is_visited;

vector<int> arr = {100,4,200,1,3,2,16233,106,106,1043,103,105,102,101,104};

int solve() {
    for(auto num : arr) {
        if(not is_visited.count(num)) {
            bool inserted = false;
            if(from_left.count(num+1)) {
                int st = num+1;
                int ed = from_left[st];

                from_left.erase(st);

                from_right[ed] = num;
                from_left[num] = ed;

                inserted = true;
            } 
            if(from_right.count(num-1)) {
                int ed = num-1;
                int st = from_right[ed];

                from_right.erase(ed);

                from_left[st] = num;
                from_right[num] = st;

                inserted = true;
            }
            if(from_right.count(num) and from_left.count(num)) {
                int ed = from_left[num];
                int st = from_right[num];

                from_left.erase(num);
                from_right.erase(ed);
                from_right.erase(num);
                from_left.erase(st);

                from_left[st] = ed;
                from_right[ed] = st;
            }

            if(not inserted) {
                from_left[num] = num;
                from_right[num] = num;
            }
        }

        is_visited.insert(num);
    }

    int ans = 0;
    for(auto v : from_left) {
        cout << v.first << " " << v.second << endl;
        ans = max(ans, v.second - v.first + 1);
    }

    return ans;
}

unordered_map<int,vector<int>> bounds;

int solve2() {
    int ans = 0;
    for(auto num : arr) {
        int left_bound = num;
        int right_bound = num;
        if(bounds.count(num+1)) {
            right_bound = bounds[num+1][1];
        }
        if(bounds.count(num-1)) {
            left_bound = bounds[num-1][0];
        }
        bounds[num] = {left_bound,right_bound};
        bounds[left_bound] = {left_bound,right_bound};
        bounds[right_bound] = {left_bound,right_bound};
        ans = max(ans, right_bound - left_bound + 1);
    }

    return ans;
}

int main() {
    cout << solve2() << endl;
}