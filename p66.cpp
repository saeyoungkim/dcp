/**
 * @file p66.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-19
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Square.

Assume you have access to a function toss_biased() which returns 0 or 1 with a probability that's not 50-50 (but also not 0-100 or 100-0). You do not know the bias of the coin.

Write a function to simulate an unbiased coin toss.
 */

#include <iostream>

using namespace std;

float r = 0.0;

int toss_biased() {
    float ran = (float)rand() / (float)RAND_MAX;
    if(ran <= r) {
        return 0;
    }

    return 1;
}

int toss_unbiased() {
    int first = 0, second = 0;
    while((first == 0 && second == 0) || (first == 1 && second == 1)) {
        first = toss_biased();
        second = toss_biased();
    }

    return second;
}

// p 1-p
// p*p p*(1-p) p*(1-p) (1-p)*(1-p)

int main() {
    srand(time(NULL));
    while(r == 0 || r == 0.5 || r == 1.0){
        r = (float)rand() / (float)RAND_MAX;
    }

    int biased_counts[2] = {0};
    for(int i = 0; i < 100000; i++) {
        biased_counts[toss_biased()]++;
    }

    for(int i = 0; i < 2; i++) {
        cout << i << " : " << biased_counts[i] << endl;
    }

    int unbiased_counts[2] = {0};
    for(int i = 0; i < 100000; i++) {
        unbiased_counts[toss_unbiased()]++;
    }

    for(int i = 0; i < 2; i++) {
        cout << i << " : " << unbiased_counts[i] << endl;
    }
}