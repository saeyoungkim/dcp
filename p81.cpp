/**
 * @file p81.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a mapping of digits to letters (as in a phone number), and a digit string, return all possible letters the number could represent. You can assume each valid number in the mapping is a single digit.

For example if {“2”: [“a”, “b”, “c”], 3: [“d”, “e”, “f”], …} then “23” should return [“ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf"].
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char,vector<string>> um;

vector<string> solve(const string& str, int idx) {
    if(idx == str.length()) {
        return {};
    } else if(idx == str.length()-1) {
        return um[str[idx]];
    }

    vector<string> next = solve(str,idx+1);

    vector<string> curr;
    for(auto n_s : next) {
        for(auto c_s : um[str[idx]]) {
            curr.push_back(c_s + n_s);
        }
    }
    
    return curr;
}

int main() {
    um['2'].push_back("a");
    um['2'].push_back("b");
    um['2'].push_back("c");
    um['3'].push_back("d");
    um['3'].push_back("e");
    um['3'].push_back("f");

    string str = "23";
    vector<string> ans = solve(str, 0);

    for(auto s : ans) {
        cout << s << endl;
    }
}