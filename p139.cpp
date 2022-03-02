/**
 * @file p139.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given an iterator with methods next() and hasNext(), create a wrapper iterator, PeekableInterface, which also implements peek(). peek shows the next element that would be returned on next().

Here is the interface:

class PeekableInterface(object):
    def __init__(self, iterator):
        pass

    def peek(self):
        pass

    def next(self):
        pass

    def hasNext(self):
        pass
 */
#include <iostream>

class Iterator {
public:
    bool hasNext() { return false; }
    int next() { return 0; }
};

class PeekableInterface {
private:
    Iterator it;
    int n
public:
    PeekableInterface(Iterator _i) : it(_it) {
        n = _it.next;
    };

    bool hasNext() { return this->n != NULL; }
    
    int next() { 
        int ret = n;
        n = it.next();
        return ret;
    }

    int peek() {
        return n;
    }
};

int main() {

}