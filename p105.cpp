/**
 * @file p105.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given a function f, and N return a debounced f of N milliseconds.

That is, as long as the debounced f continues to be invoked, f itself will not be called for N milliseconds.
 */

#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

int F(int (*func)(int,int), int i, int j, int N) {
    std::this_thread::sleep_for(std::chrono::milliseconds(N));

    return func(i,j);
}

int main() {
    auto f = [](const int a, const int b) {
        return a + b;
    };

    for(int i = 0; i < 10; i++) {
        cout << F(f ,10 ,i ,1000) << endl;
    }
}