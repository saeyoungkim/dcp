/**
 * @file p118.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a sorted list of integers, square the elements and give the output in sorted order.

For example, given [-9, -2, 0, 2, 3], return [0, 4, 4, 9, 81].
 */

#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<int> arr = {-9, -2, 0, 2, 3};
    int r = 0, l = -1;

    while(r < arr.size() and arr[r] < 0) {
        r++;
        l++;
    }

    vector<int> ans;

    while(r < arr.size() or l >= 0) {
        if(r < arr.size() and l >= 0) {
            int R = arr[r] * arr[r];
            int L = arr[l] * arr[l];
            if(R >= L) {
                ans.push_back(L);
                l--;
            } else {
                ans.push_back(R);
                r++;
            }
        } else if(r < arr.size()) {
            ans.push_back(arr[r] * arr[r]);
            r++;
        } else {
            ans.push_back(arr[l] * arr[l]);
            l--;
        }
    }

    for_each(ans.begin(), ans.end(), [](const int a) {
        cout << a << " ";
    });
    cout << endl;
}