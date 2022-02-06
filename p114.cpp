/**
 * @file p114.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given a string and a set of delimiters, reverse the words in the string while maintaining the relative order of the delimiters. For example, given "hello/world:here", return "here/world:hello"

Follow-up: Does your solution work for the following cases: "hello/world:here/", "hello//world:here"
 */
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    string str;
    cin >> str;

    cout << str << endl;

    stack<string> words;
    queue<string> delimiters;

    int i = 0;
    int st = 0;
    while(i < str.length()) {
        while(i < str.length() and 'a' <= str[i] and str[i] <= 'z') {
            i++;
        }

        if(st != i) {
            words.push(str.substr(st,i-st));
            st = i;
        }

        while(i < str.length() and not ('a' <= str[i] and str[i] <= 'z')) {
            i++;
        }

        delimiters.push(str.substr(st,i-st));
        st = i;
    }

    string ans = "";

    while(not words.empty() and not delimiters.empty()) {
        if(not words.empty()) {
            ans += words.top();
            words.pop();
        }

        if(not delimiters.empty()) {
            ans += delimiters.front();
            delimiters.pop();
        }
    }

    cout  << ans << endl;
}