/**
 * @file p111.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a word W and a string S, find all starting indices in S which are anagrams of W.

For example, given that W is "ab", and S is "abxaba", return 0, 3, and 4.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string W,S;
    cin >> W;
    cin >> S;
    if(W.length() > S.length()) {
        cout << 0 << endl;
        return 0;
    }

    int satisfied_char_count = 0;
    int W_counts[26] = {0};
    for(int i = 0; i < W.length(); i++) {
        int idx = (int)(W[i]-'a');
        if(not W_counts[idx]) {
            satisfied_char_count++;
        }
        W_counts[idx]++;
    }

    int satisfied_curr_char_count = 0;
    int S_counts[26] = {0}; 

    vector<int> ans;
    for(int i = 0; i < S.length(); i++) {
        if(i - W.length() >= 0) {
            int prev_idx = (int)(S[i-W.length()]-'a');
            if(W_counts[prev_idx]) {
                if(S_counts[prev_idx] == W_counts[prev_idx]) {
                    satisfied_curr_char_count--;
                }
                S_counts[prev_idx]--;
            }
        } 

        int idx = (int)(S[i]-'a');
        if(W_counts[idx]) {
            S_counts[idx]++;
            if(S_counts[idx] == W_counts[idx]) {
                satisfied_curr_char_count++;
            }
        }

        if(satisfied_curr_char_count == satisfied_char_count) {
            ans.push_back(i-W.length()+1);
        }
    }

    for_each(ans.begin(), ans.end(), [](const int a) {
        cout << a << " ";
    });
    cout << endl;

    return 0;
}