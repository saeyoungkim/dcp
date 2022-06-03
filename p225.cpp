/**
 * @file p225.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Bloomberg.

There are N prisoners standing in a circle, waiting to be executed. The executions are carried out starting with the kth person, and removing every successive kth person going clockwise until there is no one left.

Given N and k, write an algorithm to determine where a prisoner should stand in order to be the last survivor.

For example, if N = 5 and k = 2, the order of executions would be [2, 4, 1, 5, 3], so you should return 3.

Bonus: Find an O(log N) solution if k = 2.
 */
#include <vector>
#include <iostream>

using namespace std;

int lastSurvivor(vector<int>& prisoners, int N, int k) {
    vector<bool> visited(N, false);

    int idx = 0;
    int count = N;
    while(count) {
        int step = k-1;        
        while(step or visited[idx]) {
            if(not visited[idx]) {
                step--;
            }

            idx = (idx+1) % N;
        }

        visited[idx] = true;

        count--;
    }

    return prisoners[idx];
}

int lastSurvivor2(vector<int>& prisoners, int N, int k = 2) {
    vector<bool> visited(N, false);

    int idx = 0;
    int count = N;
    while(count) {
        int step = k-1;        
        while(step or visited[idx]) {
            if(not visited[idx]) {
                step--;
            }

            idx = (idx+1) % N;
        }

        visited[idx] = true;

        count--;
    }

    return prisoners[idx];
}

// 1 2 3 4 5 6 7 8 9 10
// 2 4 6 8 10 2

// 1 3 5 7 9
// 3 7 4
// 1 9 8
// 5

// 1 2 3
// 8   4
// 7 6 5

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19

// 2 4 6 8 10 12 14 16 18 2

// 1 3 5 7 9 11 13 15 17 19
// 1 5 9 13 17 4

// 3 7 11 15 19
// 3 11 19

// 7 15
// 15

// 7

int main() {
    int N, k;
    cin >> N >> k;
    
    vector<int> prisoners(N, 0);

    for(int i=0; i<N; i++) {
        prisoners[i] = i+1;
    }

    cout << lastSurvivor(prisoners, N, k) << endl;
}