/**
 * @file p103.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Square.

Given a string and a set of characters, return the shortest substring containing all the characters in the set.

For example, given the string "figehaeci" and the set of characters {a, e, i}, you should return "aeci".

If there is no substring containing all the characters in the set, return null.
 */
#include <list>
#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

unordered_set<char> us = {'a','e','i'};

string solve(const string& str) {
    unordered_map<char,int> visited;

    for(auto c : us) {
        visited[c] = 0;
    }

    list<int> l;

    string ans = "";
    int ans_len = INT_MAX;

    for(int i = 0; i < str.length(); i++) {
        if(us.count(str[i])) {
            visited[str[i]]++;
            l.push_back(i);

            bool is_staisfied = true;
            for(auto c : us) {
                if(not visited[c]) {
                    is_staisfied = false;
                    break;
                }
            }

            if(not is_staisfied) {
                continue;
            }

            while(not l.empty() and visited[str[l.front()]] > 1) {
                visited[str[l.front()]]--;
                l.pop_front();
            }

            if(ans_len > l.back() - l.front() + 1) {
                ans = str.substr(l.front(), l.back()-l.front()+1);
            }
        }
    }

    return ans;
}

int main() {
    string str;
    cin >> str;
    cout << solve(str) << endl;
}