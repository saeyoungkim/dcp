/**
 * @file p147.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * Good morning! Here's your coding interview problem for today.

Given a list, sort it using this method: reverse(lst, i, j), which reverses lst from i to j.
 */

#include <vector>
#include <iostream>

using namespace std;

void _sort(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
        int j = i;
        while(j >= 1 and arr[j] < arr[j-1]) {
            reverse(arr.begin()+j-1, arr.begin()+j+1);
            j--;
        }
    }
}

int main() {
    vector<int> arr = {1,6,2,7,1,3,7,5,9};

    _sort(arr);

    for_each(arr.begin(), arr.end(), [](const int v) {
        cout << v << " ";
    });
}