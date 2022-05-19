/**
 * @file p212.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Dropbox.

Spreadsheets often use this alphabetical encoding for its columns: "A", "B", "C", ..., "AA", "AB", ..., "ZZ", "AAA", "AAB", ....

Given a column number, return its alphabetical column id. For example, given 1, return "A". Given 27, return "AA".
 */

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int idx;

    cin >> idx;

    stringstream ss;

    while(idx > 0) {
        ss << (char)('A' + (--idx % 26));
        idx /= 26;
    }

    string ans = ss.str();
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}