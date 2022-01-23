/**
 * @file p43.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 Implement a stack that has the following methods:

push(val), which pushes an element onto the stack
pop(), which pops off and returns the topmost element of the stack. If there are no elements in the stack, then it should throw an error or return null.
max(), which returns the maximum value in the stack currently. If there are no elements in the stack, then it should throw an error or return null.
Each method should run in constant time.
 */

#include <vector>
#include <iostream>

using namespace std;

class Stack {
    vector<int> arr;
    vector<int> max_arr;

public:

    Stack() {};

    void push(int v) {
        arr.push_back(v);
        if(max_arr.empty() || max_arr.back() <= v) {
            max_arr.push_back(v);
        } else {
            max_arr.push_back(max_arr.back());
        }
    }

    int pop() {
        if(arr.empty()) {
            throw runtime_error("stack is empty...");
        }

        int ret = arr.back();
        arr.pop_back();
        max_arr.pop_back();

        return ret;
    }

    int max() {
        if(arr.empty()) {
            throw runtime_error("stack is empty...");
        }

        return max_arr.back();        
    }
};

int main(void) {
    Stack s = Stack();

    s.push(-1);
    cout << s.max() << endl;
    s.push(6);
    s.push(3);
    cout << s.max() << endl;
    s.push(19);
    s.push(12);
    cout << s.max() << endl;
    cout << s.pop() << endl;
    cout << s.max() << endl;
    cout << s.pop() << endl;
    cout << s.max() << endl;
    cout << s.pop() << endl;
    cout << s.max() << endl;
}