/**
 * @file p44.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Google.

We can determine how "out of order" an array A is by counting the number of inversions it has. Two elements A[i] and A[j] form an inversion if A[i] > A[j] but i < j. That is, a smaller element appears after a larger element.

Given an array, count the number of inversions it has. Do this faster than O(N^2) time.

You may assume each element in the array is distinct.

For example, a sorted list has zero inversions. The array [2, 4, 1, 3, 5] has three inversions: (2, 1), (4, 1), and (4, 3). The array [5, 4, 3, 2, 1] has ten inversions: every distinct pair forms an inversion.
 */

#include <iostream>
#include <vector>

std::vector<int> arr;

void input() {
    int N;
    std::cin >> N;
    
    int tmp;
    while(N-- > 0) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }
}

std::pair<int, std::vector<int>>  merge(std::vector<int>& left, std::vector<int>& right){
    int r1 = 0;
    std::vector<int> r2;
    int count;
    int i = 0, j = 0;
    while(i < left.size() && j < right.size()) {
        if(left[i] > right[j]) {
            count = left.size() - i;
            r1 += count;
            r2.push_back(right[j++]);
        } else {
            r2.push_back(left[i++]);
        }
    }

    while(i < left.size()) {
        r2.push_back(left[i++]);
    }

    while(j < right.size()) {
        r2.push_back(right[j++]);
    }

    return std::make_pair(r1, r2);
}

std::pair<int, std::vector<int>> solve(int l, int r, const std::vector<int>& arr) {
    if(l < r) {
        int mid = (l + r) >> 1;
        auto left = solve(l, mid, arr);
        auto right = solve(mid+1, r, arr);

        auto ret = merge(left.second, right.second);

        return std::make_pair(ret.first + left.first + right.first, ret.second);
    }

    return std::make_pair(0, {arr[l]});
}

void solve() {
    
}

int main(void) {
    input();
    solve();
}