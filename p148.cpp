/**
 * @file p148.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-12
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Apple.

Gray code is a binary code where each successive value differ in only one bit, as well as when wrapping around. Gray code is common in hardware so that we don't see temporary spurious values during transitions.

Given a number of bits n, generate a possible gray code for it.

For example, for n = 2, one gray code would be [00, 01, 11, 10].
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> gray_codes = {"0","1"};

    for(int i = 2; i <= n; i++) {
        vector<string> tmp;
        for(string code : gray_codes) {
            tmp.push_back("0" + code);
        }
        for(int i = gray_codes.size()-1; i >= 0; i--) {
            tmp.push_back("1" + gray_codes[i]);
        }

        gray_codes = tmp;
    }

    for_each(gray_codes.begin(), gray_codes.end(), [](const string code){
        cout << code << " ";
    });
    cout << endl;
}