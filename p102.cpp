/**
 * @file p102.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-24
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Lyft.

Given a list of integers and a number K, return which contiguous elements of the list sum to K.

For example, if the list is [1, 2, 3, 4, 5] and K is 9, then it should return [2, 3, 4], since 2 + 3 + 4 = 9.
 */

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> arr = {5,2,-2,52,3,22,4,1,5,6,2,3,1,5,6,7,8,3,4,2,10,-2,4,200,0,0,1,4,2,6,2,32,2};
unordered_map<int,vector<int>> memo;
vector<int> sums;

int target;

vector<int> solve() {
    sums.resize(arr.size());
    
    int curr = 0;
    for(int i = 0; i < arr.size(); i++) {
        curr += arr[i];
        sums[i] = curr;
        memo[curr].push_back(i);
    }

    for(int i = sums.size()-1; i >= 0; i--) {
        int find = sums[i] - target;
        
        if(find == 0) {
            return vector<int>(arr.begin(), arr.begin()+i+1);
        }

        if(find == sums[i]) {
            if(memo[sums[i]].size() >= 2) {
                return vector<int>(arr.begin() + memo[sums[i]].front() + 1, arr.begin() + i + 1);
            }
        }

        if(memo[find].size()) {
            return vector<int>(arr.begin() + memo[find].front() + 1, arr.begin() + i + 1);
        }
    }

    return {-1};
}

int main() {
    cin >> target;

    vector<int> ans = solve();

    for(auto n : ans) {
        cout << n << " ";
    }
    cout << endl;
}