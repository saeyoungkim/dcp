/**
 * @file p40.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 * Given an array of integers where every integer occurs three times except for one integer, which only occurs once, find and return the non-duplicated integer.

For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.

Do this in O(N) time and O(1) space.
 */

/**
 * ビットの数を数えていけば良さそう（残りが1であればそれは使うやつということになるかな）
 * 0~32まで1ビットずつ左シフトしながら1bitがどれぐらいたっているかを数えて3で割って0になれば0でなければ1
 */

#include <iostream>
#include <vector>

std::vector<int> arr = {13,19,13,13};

void solve() {
    int ret = 0;
    for(int i = 0; i < 32; i++) {
        int count = 0;
        for(auto num : arr) {
            if(num & (1 << i)) {
                count++;
            }
        }

        if(count % 3) {
            ret |= (1 << i);
        }
    }

    std::cout << ret << std::endl;
}

int main(void) {
    solve();
}