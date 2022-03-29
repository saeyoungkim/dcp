/**
 * @file p165.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given an array of integers, return a new array where each element in the new array is the number of smaller elements to the right of that element in the original input array.

For example, given the array [3, 4, 9, 6, 1], return [1, 1, 2, 1, 0], since:

There is 1 smaller element to the right of 3
There is 1 smaller element to the right of 4
There are 2 smaller elements to the right of 9
There is 1 smaller element to the right of 6
There are no smaller elements to the right of 1
 */

// [3,4,9,6,1] -> [1,1,2,1,0]

#include <vector>
#include <iostream>
#include <set>

using namespace std;

int main() {
    vector<int> l = {3,3,4,9,6,1};

    vector<int> ans;

    auto comp = [](const pair<int,int> &a, const pair<int,int> &b) {
        return a.first < b.first;
    };

    set<pair<int,int>, decltype(comp)> s{comp};
    
    for(int i = l.size()-1; i >= 0; i--) {
        pair<int,int> v = make_pair(l[i], i);
        s.insert(v);
        ans.push_back(distance(s.begin(), s.find(v)));
    }

    reverse(ans.begin(), ans.end());

    for_each(ans.begin(), ans.end(), [](const int v) {
        cout << v << " ";
    });
    cout << endl;
}