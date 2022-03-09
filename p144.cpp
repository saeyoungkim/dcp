/**
 * @file p144.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given an array of numbers and an index i, return the index of the nearest larger number of the number at index i, where distance is measured in array indices.

For example, given [4, 1, 3, 5, 6] and index 0, you should return 3.

If two distances to larger numbers are the equal, then return any one of them. If the array at i doesn't have a nearest larger integer, then return null.

Follow-up: If you can preprocess the array, can you do this in constant time?
 */

#include <vector>
#include <iostream>

using namespace std;

int nearest(vector<int>& arr, int idx) {
    for(int j = 0; j < arr.size(); j++) {
        int low = idx - j;
        int high = idx + j;
        if(low >= 0 and arr[low] > arr[idx]) {
            return low;
        }
        if(high < arr.size() and arr[high] > arr[idx]) {
            return high;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {4,1,3,5,6};

    vector<int> cache(arr.size(), -1);

    for(int i = 0; i < arr.size(); i++) {
        int l = i == 0 ? INT_MIN : arr[i-1];
        int r = i == arr.size()-1 ? INT_MIN : arr[i+1];

        if(arr[i] < l or arr[i] < r) {
            cache[i] = 1;
        }
    }

    for(int i = 0; i < cache.size(); i++) {
        if(cache[i] == -1) {
            cache[i] = nearest(arr, i);
        }
    }

    cout << cache[0] << endl;    
}