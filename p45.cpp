/**
 * @file p45.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-11-28
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Two Sigma.

Using a function rand5() that returns an integer from 1 to 5 (inclusive) with uniform probability, implement a function rand7() that returns an integer from 1 to 7 (inclusive).
 */

#include <iostream>
#include <random>

int rand5() {
    std::random_device rnd;     // 非決定的な乱数生成器を生成
    std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(1, 5);

    return rand100(mt);
}

int rand7() {
    int ret = 0;
    do {
        ret = 0;
        ret = ret*5 + (rand5()-1);
        ret = ret*5 + (rand5()-1);
        ret++;
    } while (ret > 7);

    return ret;
}

int main(void) {
    srand(time(NULL));

    int count[7] = {0};
    for(int i = 0; i < 1e5; i++) {
        count[rand7()-1]++;
    }

    std::cout << "hi" << std::endl;

    for(int i = 0; i < 7; i++) {
        std::cout << i+1 << " : " << count[i] << std::endl;
    }
    return 0;
}