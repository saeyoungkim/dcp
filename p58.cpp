/**
 * @file p58.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Amazon.

An sorted array of integers was rotated an unknown number of times.

Given such an array, find the index of the element in the array in faster than linear time. If the element doesn't exist in the array, return null.

For example, given the array [13, 18, 25, 2, 8, 10] and the element 8, return 4 (the index of 8 in the array).

You can assume all the integers in the array are unique.
 */

/**
 * @brief 
 * the binary search has the origin of thought that some value will exist
 * we can get the hint of finding value's position even if the sorted array is rotated 
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int N;

int T;

#define FOR(N) for(int i = 0; i < (N); i++)

void input() {
    cin >> T >> N;
    int tmp;
    FOR(N) {
        cin >> tmp;
        arr.push_back(tmp);
    }
}

int bin_search(int l, int r, const vector<int>& arr) {
    if(l > r) {
        return -1;
    }

    int mid = l + ((r-l) >> 1);

    if(arr[mid] == T) {
        return mid;
    }

    if(arr[mid] < arr[r]) {
        if(arr[mid] < T && T <= arr[r]) {
            return bin_search(mid+1, r, arr);
        } else {
            return bin_search(l, mid-1, arr);
        }
    } else { // arr[l] < arr[mid]
        if(arr[l] <= T && T < arr[mid]) {
            return bin_search(l, mid-1, arr);
        } else {
            return bin_search(mid+1, r, arr);
        }
    }

    return -1;
}

void solve() {
    cout << bin_search(0, arr.size()-1, arr) << endl;
}

int main(void) {
    input();
    solve();
}
