/**
 * @file p46.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Amazon.

Given a string, find the longest palindromic contiguous substring. If there are more than one with the maximum length, return any one.

For example, the longest palindromic substring of "aabcdcb" is "bcdcb". The longest palindromic substring of "bananas" is "anana".
 */


#include <iostream>
#include <vector>
using namespace std;

string str;

// is_paindrome[i][j] => [i,j]의 문자열이 팔린드롬인가?
vector<vector<bool>> is_palindrome;

void input_1() {
    cin >> str;

    is_palindrome.resize(str.length());
    for(int i = 0; i < str.length(); i++) {
        is_palindrome[i].resize(str.length());
        for(int j = 0; j < str.length(); j++) {
            is_palindrome[i][j] = false;
        }
    }
}

/**
 * 1. dynamic programming
 */
void solve_1() {
    string ans = "";

    for(int i = 0; i < str.length(); i++) {
        is_palindrome[i][i] = true;
        ans = str.substr(i,1);
    }

    for(int i = 0; i < str.length()-1; i++) {
        if(str[i] == str[i+1]) {
            is_palindrome[i][i+1] = true;
            ans = str.substr(i,2);
        }
    }

    for(int i = 2; i < str.length(); i++) {
        for(int j = 0; j < str.length()-i; j++) {
            if(is_palindrome[j+1][j+i-1] && str[j] == str[j+i]) {
                is_palindrome[j][j+i] = true;
                ans = str.substr(j,i+1);
            }
        }
    }

    cout << ans << endl;

    return;
}

/**
 *
 * 2. 전개
 */

void input_2() {
    cin >> str;
}

void solve_2() {
    string ans = "";
    for(int i = 0; i < str.length(); i++) {
        int l = i;
        int r = i;
        while(l >= 0 && r < str.length() && str[l] == str[r]) {
            l--;
            r++;
        }

        string tmp = str.substr(l+1, r-l-1);
        if(tmp.length() > ans.length()) {
            ans = tmp;
        }
    }

    for(int i = 0; i < str.length()-1; i++) {
        int l = i;
        int r = i+1;
        while(l >= 0 && r < str.length() && str[l] == str[r]) {
            l--;
            r++;
        }

        string tmp = str.substr(l+1, r-l-1);
        if(tmp.length() > ans.length()) {
            ans = tmp;
        }
    }

    cout << ans << endl;
    return ;
}

int main(void) {
    input_2();
    solve_2();
}