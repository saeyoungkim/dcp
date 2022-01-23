/**
 * @file p69.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Facebook.

Given a list of integers, return the largest product that can be made by multiplying any three integers.

For example, if the list is [-10, -10, 5, 2], we should return 500, since that's -10 * -10 * 5.

You can assume the list has at least three integers.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr = {-10, 5, 2, -10, 11, 5};

int main() {
    sort(arr.begin(), arr.end());

    int ans;
    if(arr.front() >= 0 || arr.back() <= 0) {
        ans = arr[arr.size()-1] * arr[arr.size()-2] * arr[arr.size()-3];
    } else {
        ans = max(ans = arr[arr.size()-1] * arr[arr.size()-2] * arr[arr.size()-3], arr[0] * arr[1] * arr[arr.size()-1]);
    }

    cout << ans << endl;
}