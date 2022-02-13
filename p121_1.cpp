#include <vector>
#include <iostream>

using namespace std;

int longest_palindrome(const string& s) {
    vector<vector<int>> memo(s.length(), vector<int>(s.length(), 0));

    for(int i = s.length()-1; i >= 0; i--) {
        memo[i][i] = 1;

        for(int j = i+1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                memo[i][j] = 2 + memo[i+1][j-1];
            } else {
                memo[i][j] = max(memo[i+1][j], memo[i][j-1]);
            }
        }
    }

    return memo[0][s.length()-1];
}

int main() {
    string str;
    int k;
    cin >> str;
    cin >> k;

    cout << boolalpha << (str.length() - longest_palindrome(str) <= k) << endl; 
}