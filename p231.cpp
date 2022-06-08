/**
 * @file p231.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by IBM.

Given a string with repeated characters, rearrange the string so that no two adjacent characters are the same. If this is not possible, return None.

For example, given "aaabbc", you could return "ababac". Given "aaab", return None.
 */

#include <unordered_map>
#include <iostream>

using namespace std;

struct Info {
    bool possible = true;
    string str = "";

    Info(bool _p = true, string _s = ""): possible(_p), str(_s) {};
};

Info backtrack(unordered_map<char,int>& memo, int remain, char prev = ' ') {
    if(not remain) return Info(true, "");

    Info ret = Info(false, "");

    for(auto p : memo) {
        if(p.second > 0 and p.first != prev) {
            memo[p.first]--;
            ret = backtrack(memo, remain-1, p.first);
            if(ret.possible) {
                ret.str = p.first + ret.str;
                return ret;
            }
            memo[p.first]++;
        }
    }

    ret.str = "";
    return ret;
}

string rearrange(string str) {
    unordered_map<char, int> memo;

    for(auto ch : str) memo[ch]++;

    return backtrack(memo, str.length()).str;
}

int main() {
    string str;
    cin >> str;

    cout << rearrange(str) << endl;
}