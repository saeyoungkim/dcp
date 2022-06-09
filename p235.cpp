/**
 * @file p235.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given an array of numbers of length N, find both the minimum and maximum using less than 2 * (N - 2) comparisons.
 */

#include <iostream>
#include <vector>

using namespace std;

pair<int,int> getMinAndMax(const vector<int>& arr, int l, int r) {
    if(l == r)
        return make_pair(arr[l], arr[r]);
    else if(l == r-1)
        return arr[r] > arr[l] ? make_pair(arr[l], arr[r]) : make_pair(arr[r], arr[l]);
    
    int half = (l+r) >> 1;

    pair<int,int> first = getMinAndMax(arr, l, half);
    pair<int,int> second = getMinAndMax(arr, half+1, r);

    return make_pair((first.first > second.first ? second.first : first.first), (first.second > second.second ? first.second : second.second));
}

int main() {
    vector<int> arr = {1,6,2,-5,3,-1,7,2,19,4,6,-1,-5};

    pair<int,int> p = getMinAndMax(arr,0,arr.size()-1);

    cout << p.first << " " << p.second << endl;
}