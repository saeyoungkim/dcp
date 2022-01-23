/**
 * @file p79.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-01
 * 
 * @copyright Copyright (c) 2022
 * 
 Given an array of integers, write a function to determine whether the array could become non-decreasing by modifying at most 1 element.

For example, given the array [10, 5, 7], you should return true, since we can modify the 10 into a 1 to make the array non-decreasing.

Given the array [10, 5, 1], you should return false, since we can't modify any one element to get a non-decreasing array.
 */

/**
 * @brief 
 * some index i, from 0 to i-1 will be more than or eqaul to index i
 * so we using stack, we count value will be less than index i
 * @return int 
 */
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

bool solve(vector<int>& arr) {
    stack<int> stk;
    int count = 0;
    for(int i = 0; i < arr.size() & count <= 1; i++) {
        if(stk.empty() or stk.top() <= arr[i]) {
            stk.push(arr[i]);
        } else {
            while(!stk.empty()) {
                if(stk.top() > arr[i]) {
                    stk.pop();
                    count++;
                } else {
                    break;
                }
            }
            stk.push(arr[i]);
        }
    }

    return count <= 1;
}

int main() {
    int N ;
    cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    cout << boolalpha << solve(arr) << endl;
}