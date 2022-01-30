/**
 * @file p108.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given two strings A and B, return whether or not A can be shifted some number of times to get B.

For example, if A is abcde and B is cdeab, return true. If A is abc and B is acb, return false.
 */

#include <iostream>

using namespace std;

int main() {
    string A ;
    string B ;
    cin >> A >> B;

    string tmp = B+B;

    cout << boolalpha << (tmp.find(A) != string::npos) << endl;

    return 0;
}