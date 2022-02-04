/**
 * @file p113.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a string of words delimited by spaces, reverse the words in string. For example, given "hello world here", return "here world hello"

Follow-up: given a mutable string representation, can you perform this operation in-place?
 */

#include <iostream>

using namespace std;

void _reverse(string& str) {
    int l = 0, r = str.length()-1;
    while(l<r) {
        swap(str[l++], str[r--]);
    }

    int st = 0;
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() or str[i] == ' ') {
            reverse(str.begin()+st, str.begin()+i);
            st = i+1;
        }
    }
}

int main() {
    string str;
    getline(cin, str);

    cout << str << endl;
    _reverse(str);
    cout << str << endl;
}