/**
 * @file p206.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Twitter.

A permutation can be specified by an array P, where P[i] represents the location of the element at i in the permutation. For example, [2, 1, 0] represents the permutation where elements at the index 0 and 2 are swapped.

Given an array and a permutation, apply the permutation to the array. For example, given the array ["a", "b", "c"] and the permutation [2, 1, 0], return ["c", "b", "a"].
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c'};
    vector<int> perm = {2,1,0};

    vector<char> ans;
    for(int i=0; i < arr.size(); i++) {
        ans.push_back(arr[perm[i]]);
    }

    for_each(ans.begin(), ans.end(), [](char ch) {
        cout << ch << " ";
    });
    cout << endl;
}