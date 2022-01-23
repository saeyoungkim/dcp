/**
 * @file p51.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
This problem was asked by Facebook.

Given a function that generates perfectly random numbers between 1 and k (inclusive), where k is an input, write a function that shuffles a deck of cards represented as an array using only swaps.

It should run in O(N) time.

Hint: Make sure each one of the 52! permutations of the deck is equally likely.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector<int> deck;
int k;

int generate(int k, int N) {
    std::random_device seed_gen;
    std::default_random_engine engine(seed_gen());

    // 0以上9以下の値を等確率で発生させる
    std::uniform_int_distribution<> dist(0, k-1);

    int ct = 1;
    int max_v = k;
    while(max_v < N-1) {
        max_v *= k;
        ct++;
    }

    int ret;
    int tmp_ct;
    int tmp;
    while(true) {
        tmp = 0;
        tmp_ct = ct;
        while(tmp_ct--) {
            tmp *= k;
            tmp += dist(engine);
        }

        if(tmp < N) {
            ret = tmp;
            break;
        }
    }

    return ret;
}

void input() {
    std::cin >> k;
    for(int i = 1; i <= 52; i++) {
        deck.push_back(i);
    }
}

void solve() {
    for_each(deck.begin(), deck.end(), [](const int a) {
        std::cout << a << ", ";
    });
    std::cout << std::endl;

    for(int i = 0; i < 52; i++) {
        int swap_target = generate(k, 52-i);
        std::swap(deck[i], deck[swap_target + i]);
    }

    for_each(deck.begin(), deck.end(), [](const int a) {
        std::cout << a << ", ";
    });
    std::cout << std::endl;

}

int main(void) {
    input();
    solve();
}