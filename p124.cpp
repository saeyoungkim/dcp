/**
 * @file p124.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * You have n fair coins and you flip them all at the same time. Any that come up tails you set aside. The ones that come up heads you flip again. How many rounds do you expect to play before only one coin remains?

Write a function that, given n, returns the number of rounds you'd expect to play until one coin remains.
 */

#include <iostream>
#include <ctime>

using namespace std;

int flipNumber(int n) {
    if(n == 1) {
        return 0;
    }

    int next = n;

    int count = 1;

    for(;;) {
        for(int i = 0; i < n; i++) {
            if(rand()&1) {
                next--;
            }
        }

        if(next) break;

        next = n;
        count++;
    }

    return count + flipNumber(next);
}

int main() {
    srand(time(NULL));

    cout << flipNumber(5) << endl;
    cout << flipNumber(5) << endl;
    cout << flipNumber(5) << endl;
    cout << flipNumber(5) << endl;
    cout << flipNumber(5) << endl;
    cout << flipNumber(1000) << endl;
}