/**
 * @file p120.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Implement the singleton pattern with a twist. First, instead of storing one instance, store two instances. And in every even call of getInstance(), return the first instance and in every odd call of getInstance(), return the second instance.
 */

#include <iostream>

using namespace std;

class P120 {
private:
    P120(const string& message) {
        this->message = message;
    }

    string message;

    static P120* instance1;
    static P120* instance2;

    static int count;
public:
    static P120* getInstance() {
        return (++count) & 1 ? instance1 : instance2;
    }

    string getMessage() {
        return this->message;
    }
};

int P120::count = 0;
P120* P120::instance1 = new P120("Hello I'm 1");
P120* P120::instance2 = new P120("Hello I'm 2");

int main() {
    cout << P120::getInstance()->getMessage() << endl;
    cout << P120::getInstance()->getMessage() << endl;
    cout << P120::getInstance()->getMessage() << endl;
    cout << P120::getInstance()->getMessage() << endl;
}