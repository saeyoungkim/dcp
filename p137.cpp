/**
 * @file p137.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * Implement a bit array.

A bit array is a space efficient array that holds a value of 1 or 0 at each index.

init(size): initialize the array with size
set(i, val): updates index at i with val where val is either 1 or 0.
get(i): gets the value at index i.
 */

#include <iostream>
#include <vector>

using namespace std;

class BitArray {
    const int BITS = 32;
    int size;
    vector<int> arr;

public:
    BitArray(int _n) : size(_n) {
        arr.resize(((this->size-1) / BITS) + 1);
    }

    void set(int i, bool val) {
        int adjust = i / BITS;
        int idx = i % BITS;

        int pick = (1 << idx);

        if((not (arr[adjust] & pick)) and (val << idx))  {
            arr[adjust] ^= 1 << idx;
        } else if ((not (val << idx)) and (arr[adjust] & pick)) {
            arr[adjust] ^= 1 << idx;
        }
    }

    bool get(int i) {
        int adjust = i / BITS;
        int idx = i % BITS;

        return (arr[adjust] & (1 << idx));
    }
};

int main() {
    BitArray ba = BitArray(10);

    ba.set(0,1);

    ba.set(3,1);

    ba.set(6,1);

    cout << ba.get(0) << endl;
    cout << ba.get(2) << endl;
    cout << ba.get(3) << endl;
    cout << ba.get(6) << endl;

    ba.set(6,0);

    cout << ba.get(6) << endl;
}