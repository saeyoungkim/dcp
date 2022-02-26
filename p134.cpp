/**
 * @file p134.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

You have a large array with most of the elements as zero.

Use a more space-efficient data structure, SparseArray, that implements the same interface:

init(arr, size): initialize with the original large array and size.
set(i, val): updates index at i with val.
get(i): gets the value at index i.
 */

#include <iostream>
#include <unordered_map>

using namespace std;

class SparseArray {
    int size;
    unordered_map<int,int> um;
public:
    SparseArray(int _s) : size(_s) {}

    void set(int idx, int val) {
        assert(idx >= 0 and idx < size);

        um[idx] = val;
    }

    int get(int idx) {
        assert(idx >= 0 and idx < size);
        assert(um.count(idx) > 0);

        return um[idx];
    }
};

int main() {
    SparseArray arr = SparseArray(5);
    arr.set(0,5);
    cout << arr.get(0) << endl;
    arr.set(0,3);
    cout << arr.get(0) << endl;
    arr.set(10,1);
}