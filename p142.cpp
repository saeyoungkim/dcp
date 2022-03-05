/**
 * @file p142.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

You're given a string consisting solely of (, ), and *. * can represent either a (, ), or an empty string. Determine whether the parentheses are balanced.

For example, (()* and (*) are balanced. )*( is not balanced.
 */

#include <iostream>
#include <stack>

using namespace std;

bool is_balanced(const string& str) {
    stack<int> stk;
    stack<int> start_stk;

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if(ch == '(') {
            stk.push(i);
        } else if(ch == ')') {
            if(stk.size() > 0) {
                stk.pop();
            } else if(start_stk.size()) {
                start_stk.pop();
            } else {
                return false;
            }
        } else {
            start_stk.push(i);
        }
    }

    while(stk.size() and start_stk.size() and start_stk.top() > stk.top()) {
        stk.pop();
        start_stk.pop();
    }

    return stk.empty();
}

int main() {
    string str;
    cin >> str;

    cout << boolalpha << is_balanced(str) << endl;
}