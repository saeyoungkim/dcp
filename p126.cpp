/**
 * @file p126.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Write a function that rotates a list by k elements. For example, [1, 2, 3, 4, 5, 6] rotated by two becomes [3, 4, 5, 6, 1, 2]. Try solving this without creating a copy of the list. How many swap or move operations do you need?
 */

/**
 * 1 2 3 4 5 6 7 8
 * 4 5 6 7 8 1 2 3
 */

#include <vector>
#include <iostream>

using namespace std;

void rotate(vector<int>& arr, int l, int r, int k, int& count) {
    if(r-l+1 == k) {
        return ;
    } else if(r-l+1 >= (k << 1)) {
        for(int j = l; j < l+k; j++) {
            swap(arr[j], arr[j+k]);
            count++;
        }

        return rotate(arr, l+k, r, k, count);
    } 

    int n_k = r-l+1-k;
    for(int j = r; j > r-n_k; j--) {
        swap(arr[j], arr[j-n_k]);
        count++;
    }

    rotate(arr, l, r-n_k, k-n_k, count);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int k;
    cin >> k;
    int count = 0;
    rotate(arr, 0, arr.size()-1, k, count);

    cout << count << endl;
    for(const int v : arr) {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}