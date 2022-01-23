#include <iostream>
#include <vector>

/**
 * @brief 
 * You are given an array of non-negative integers that represents a two-dimensional elevation map where each element is unit-width wall and the integer is the height. Suppose it will rain and all spots between two walls get filled up.

Compute how many units of water remain trapped on the map in O(N) time and O(1) space.

For example, given the input [2, 1, 2], we can hold 1 unit of water in the middle.

Given the input [3, 0, 1, 3, 0, 5], we can hold 3 units in the first index, 2 in the second, and 3 in the fourth index (we cannot hold 5 since it would run off to the left), so we can trap 8 units of water.
 */

/**
 * @brief 
 * 1. iから考えてみるとleft < i で maxのものとright > i でmaxのもののminとなる
 */

std::vector<int> arr;
int N;

void Input() {
    std::cin >> N;
    int tmp;
    for(int i = 0; i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }
}

void Solve() {
    int left = 0;
    int right = arr.size()-1;
    int left_max = 0;
    int right_max = 0;

    int total_volume = 0;

    while(left <= right) {
        if(arr[left] < arr[right]) {
            if(arr[left] < left_max) {
                total_volume += left_max - arr[left];
            } else {
                left_max = arr[left];
            }
            left++;
        } else {
            if(arr[right] < right_max) {
                total_volume += right_max - arr[right];
            } else {
                right_max = arr[right];
            }
            right--;           
        }
    } 

    std::cout << total_volume << std::endl;
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}