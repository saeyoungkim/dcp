/**
 * @file p240.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-14
 * 
 * @copyright Copyright (c) 2022
 * 
 * There are N couples sitting in a row of length 2 * N. They are currently ordered randomly, but would like to rearrange themselves so that each couple's partners can sit side by side.

What is the minimum number of swaps necessary for this to happen?
 */

/**
 * @brief 
 * we can use greedy method
 * 
 */

#include <vector>
#include <iostream>

using namespace std;

int rearrange(vector<int>& list) {
    int swaps = 0;

    vector<int> positions(list.size(), 0);

    for(int i=0; i<list.size(); i++) positions[list[i]]=i;

    for(int i=0; i<list.size(); i+=2) {
        if((list[i] >> 1) == (list[i+1] >> 1)) continue;
        
        int t = list[i] + ((list[i] & 1) == 0 ? 1 : -1);
        swap(list[i+1], list[positions[t]]);
        swap(positions[list[i+1]], positions[t]);
        swaps++;
    }

    return swaps;
}

int main() {
    vector<int> list = {0,7,1,5,3,6,2,4};

    int swaps = rearrange(list);

    cout << swaps << endl;

    for_each(list.begin(), list.end(), [](const int v) {
        cout << v << " ";
    });
    cout << endl;
}