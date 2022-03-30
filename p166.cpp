/**
 * @file p166.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-30
 * 
 * This problem was asked by Uber.

Implement a 2D iterator class. It will be initialized with an array of arrays, and should implement the following methods:

next(): returns the next element in the array of arrays. If there are no more elements, raise an exception.
has_next(): returns whether or not the iterator still has elements left.
For example, given the input [[1, 2], [3], [], [4, 5, 6]], calling next() repeatedly should output 1, 2, 3, 4, 5, 6.

Do not use flatten or otherwise clone the arrays. Some of the arrays can be empty.
 */

#include <vector>
#include <iostream>

using namespace std;

class Iterator {
    vector<vector<int>> arr;
    int currRow = 0;
    int currCol = 0;
public:
    Iterator(vector<vector<int>> _arr) : arr(_arr) {};

    bool has_next() {
        if(currRow == arr.size()) return false;
        else return true;
    }

    int next() {
        if(has_next()) {
            
            int ret = arr[currRow][currCol];

            if(currCol < arr[currRow].size()-1) currCol++;
            else {
                currRow++;
                while(currRow < arr.size() && arr[currRow].empty()) {
                    currRow++;
                }
                currCol = 0;
            }

            return ret;
        }
        
        throw new runtime_error("do not have next iterator");
    }
};

int main() {
    Iterator iter = Iterator({{1,2},{3},{},{4,5,6}});

    while(iter.has_next()) {
        cout << iter.next() << endl;
    }
}