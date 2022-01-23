/**
 * @file p86.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a string of parentheses, write a function to compute the minimum number of parentheses to be removed to make the string valid (i.e. each open parenthesis is eventually closed).

For example, given the string "()())()", you should return 1. Given the string ")(", you should return 2, since we must remove all of them.
 */
#include <stack>
#include <iostream>

using namespace std;

string parenthesis = ")(";

int remove(string parenthesis) {
    stack<char> stk;
    for(auto p : parenthesis) {
        if(p == ')' and !stk.empty() and stk.top() == '(') {
            stk.pop();
        } else {
            stk.push(p);
        }
    }

    return stk.size();
}

int main() {
    cout << remove(parenthesis) << endl;
}