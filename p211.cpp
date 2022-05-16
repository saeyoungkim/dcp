/**
 * @file p211.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Given a string and a pattern, find the starting indices of all occurrences of the pattern in the string. For example, given the string "abracadabra" and the pattern "abr", you should return [0, 7].
 */

#include <iostream>
#include <unordered_map>
#include <vector>

#define MOD 1000000007

using namespace std;

vector<int> startIndex(const string& s, const string& t) {
    long sum = 0;
    long u = 1;

    vector<int> cache(s.length(), 0);
    for(int i=0; i < t.size(); i++) {
        cache[i] = (s[i] - 'a') * u % MOD;
        sum = (sum + cache[i]) % MOD;
        u = (u * 26) % MOD;
    }

    unordered_map<long, vector<int>> memo;

    memo[sum].push_back(0);

    for(int i = t.size(); i < s.size(); i++) {
        cache[i] = (s[i] - 'a') * u % MOD;
        sum -= cache[i-t.size()];
        sum = (sum + cache[i]) % MOD;

        memo[sum].push_back(i-t.size()+1);
        u = (u * 26) % MOD;
    }

    long tHash = 0;
    u = 1;
    for(int i=0; i < t.size(); i++) {
        tHash = (tHash + (t[i] - 'a')) * u % MOD;
        u = (u * 26) % MOD;
    }

    return memo[tHash];
}

int main() {
    string s,t;
    
    cin >> s >> t;

    vector<int> startIndexes = startIndex(s, t);

    for_each(startIndexes.begin(), startIndexes.end(), [](const int& v) {
        cout << v << " ";
    });

    cout << endl;
}