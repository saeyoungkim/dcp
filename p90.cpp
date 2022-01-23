/**
 * @file p90.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-12
 * 
 * @copyright Copyright (c) 2022
 * 
 * This question was asked by Google.

Given an integer n and a list of integers l, write a function that randomly generates a number from 0 to n-1 that isn't in l (uniform).
 */
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

vector<int> l = {0,4,2,11,5}; // 0,2,4,5,11 7 8 9 10 11  <->  1 3 6 7 8 9 10

int main() {
    int n;
    cin >> n;

    unordered_set<int> us(l.begin(), l.end());

    int ct = 0;
    for(auto i : us) {
        if(i >= 0 and i < n) {
            ct++;
        }
    }

    int n_n = n - ct;
    int next = n_n;

    unordered_map<int,int> converter;
    for(int i = 0; i < n_n; i++) {
        if(us.find(i) == us.end()) {
            converter[i] = i;
        } else if(i < n_n) {
            while(us.find(next) != us.end()) {
                next++;
            }

            converter[i] = next++;
        }
    }

    for(int i = 0; i < n_n; i++) {
        cout << i << " : " << converter[i] << endl;
    }

    vector<int> counts(n,0);
    srand(time(NULL));

    for(int i = 0; i < 1e6; i++) {
        counts[converter[rand() % n_n]]++;
    }

    for(int i = 0; i < n; i++) {
        cout << i << " : " << counts[i] << endl;
    }
}