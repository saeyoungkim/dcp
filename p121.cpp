/**
 * @file p121.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-13
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a string which we can delete at most k, return whether you can make a palindrome.

For example, given 'waterrfetawx' and a k of 2, you could delete f and x to get 'waterretaw'.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> memo;

int can_palindrome(const string& str, int l, int r, int k) {
    if(k < 0) {
        return -1;
    }
    
    if(l > r) {
        return 1;
    }

    if(not memo[l][r][k]) {
        if(str[l] == str[r]) {
            memo[l][r][k] = can_palindrome(str, l+1, r-1, k);
        } else {
            memo[l][r][k] = can_palindrome(str,l+1,r,k-1);
            if(memo[l][r][k] == -1) {
                memo[l][r][k] = can_palindrome(str,l,r-1,k-1);
            }
        }

    }

    return memo[l][r][k];
}

int main() {
    string str;
    int k ;
    cin >> str;
    cin >> k;

    memo.resize(str.length());

    for(auto& o1 : memo) {
        o1.resize(str.length());
        for(auto& o2: o1) {
            o2.resize(k+1);
        }
    }

    cout << boolalpha << (can_palindrome(str, 0, str.length()-1, k) == 1) << endl;
}