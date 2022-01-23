#include <iostream>
#include <vector>

/**
 * @brief 
 * This problem was asked by Google.

You are given an array of length n + 1 whose elements belong to the set {1, 2, ..., n}. By the pigeonhole principle, there must be a duplicate. Find it in linear time and space.
 */

void solve() {
    std::vector<int> arr = {1,5,2,3,6,7,8,4,9,10,11,15,14,14,13,12};

    while(true) {
        if(arr[0] != arr[arr[0]]) {
            int tmp = arr[0];
            arr[0] = arr[arr[0]];
            arr[tmp] = tmp;
        } else {
            break;
        }
    }

    std::cout << arr[0] << std::endl;
    return ;
}

int main(void) {
    solve();
}