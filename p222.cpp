/**
 * @file p222.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * Good morning! Here's your coding interview problem for today.

This problem was asked by Quora.

Given an absolute pathname that may have . or .. as part of it, return the shortest standardized path.

For example, given "/usr/bin/../bin/./scripts/../", return "/usr/bin/".
 */

#include <stack>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stack<string> stk;

    string paths;
    cin >> paths;

    int i=0;

    while(i != -1) {
        int pos = paths.find('/', i+1);
        cout << pos << endl;

        if(i < pos) {
            string sub = paths.substr(i+1, pos-i-1);

            if(sub == ".." and not stk.empty())
                stk.pop();
            else if(sub != ".")
                stk.push(sub);
        } else {
            stk.push("");
        }

        i = pos;
    }

    stack<string> forNewPath;

    while(not stk.empty()) {
        forNewPath.push(stk.top());
        stk.pop();
    }

    stringstream ss;
    while(not forNewPath.empty()) {
        ss << '/' << forNewPath.top();
        forNewPath.pop();
    }

    cout << ss.str() << endl;
}