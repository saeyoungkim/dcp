/**
 * @file p57.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
This problem was asked by Amazon.

Given a string s and an integer k, break up the string into multiple lines such that each line has a length of k or less. You must break it up so that words don't break across lines. Each line has to have the maximum possible amount of words. If there's no way to break the text up, then return null.

You can assume that there are no spaces at the ends of the string and that there is exactly one space between each word.

For example, given the string "the quick brown fox jumps over the lazy dog" and k = 10, you should return: ["the quick", "brown fox", "jumps over", "the lazy", "dog"]. No string in the list has a length of more than 10.
 */

#include <iostream>
#include <vector>

using namespace std;

string str;
int k;

void input() {
    getline(cin, str);
}

void solve() {
    k = 10;

    vector<string> ans;

    int i = 0;
    while(i < str.size()) {
        if(i + k - 1 >= str.size()-1) {
            ans.push_back(str.substr(i,k));
            break;
        }


        if(str[i+k] == ' ') {
            ans.push_back(str.substr(i,k));
            i = i+k+1;
        } else {
            int j = i+k-1;
            while(j > i) {
                if(str[j] == ' ') {
                    ans.push_back(str.substr(i,j-i));
                    break;
                }
                j--;
            }

            if(j == i) {
                cout << "NULL" << endl;
                return ;
            }

            i = j+1;
        }
    }

    for_each(ans.begin(), ans.end(), [](const string& str) {
        cout << str << endl;
    });

    return ;
}

int main(void) {
    input();
    solve();
}