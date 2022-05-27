/**
 * @file p217.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Oracle.

We say a number is sparse if there are no adjacent ones in its binary representation. For example, 21 (10101) is sparse, but 22 (10110) is not. For a given input N, find the smallest sparse number greater than or equal to N.

Do this in faster than O(N log N) time.
 */

#include <iostream>
#include <bitset>

using namespace std;

// 10101110011
// 10101110100
// 10110000100
// 11000000100
//100000000100

int main() {
    int x;
    cin >> x;

    cout << bitset<32>(x) << endl;

    int j=0;

    while((1 << j) <= x) {
        if(x & (1 << j)) {
            int p = j;
            while((1 << p) & x) {
                p++;
            }

            if(p-j > 1) {
                x += (1 << j);
                j = p-1;
            } 
        }

        j++;
    }

    cout << bitset<32>(x) << endl;
}