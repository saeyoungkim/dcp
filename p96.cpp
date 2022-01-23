/**
 * @file p96.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-18
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Given a number in the form of a list of digits, return all possible permutations.

For example, given [1,2,3], return [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]].
 */

#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> arr1 = {1,2,3};
vector<int> arr2 = {1,2,1,2};

void getAllPermutations(const vector<int>& arr, vector<int>& tmp, vector<vector<int>>& ans, vector<bool>& is_visited) {
    if(tmp.size() == arr.size()) {
        ans.push_back(tmp);
    }

    unordered_set<int> seen;
    for(int i = 0; i < arr.size(); i++) {
        if(not is_visited[i] and not seen.count(arr[i])) {
            is_visited[i] = true;
            tmp.push_back(arr[i]);
            getAllPermutations(arr,tmp,ans,is_visited);
            is_visited[i] = false;
            tmp.pop_back();
            seen.insert(arr[i]);
        }
    }
}

int main() {
    vector<vector<int>> ans1;
    vector<bool> is_visited1(arr1.size(), false);
    vector<vector<int>> ans2;
    vector<bool> is_visited2(arr2.size(), false);

    vector<int> tmp1;
    vector<int> tmp2;
    getAllPermutations(arr1, tmp1, ans1, is_visited1);
    getAllPermutations(arr2, tmp2, ans2, is_visited2);

    for_each(ans1.begin(), ans1.end(), [](const vector<int>& v) {
        cout << "[ ";
        for_each(v.begin(), v.end(), [](const int a) {
            cout << a << " ";
        });
        cout << "], ";
    });
    cout << endl;
    for_each(ans2.begin(), ans2.end(), [](const vector<int>& v) {
        cout << "[ ";
        for_each(v.begin(), v.end(), [](const int a) {
            cout << a << " ";
        });
        cout << "], ";
    });
}