#include <iostream>
#include <unordered_map>

/**
 * @brief 
 * Given a string, find the palindrome that can be made by inserting the fewest number of characters as possible anywhere in the word. If there is more than one palindrome of minimum length that can be made, return the lexicographically earliest one (the first one alphabetically).

For example, given the string "race", you should return "ecarace", since we can add three letters to it (which is the smallest amount to make a palindrome). There are seven other palindromes that can be made from "race" by adding three letters, but "ecarace" comes first alphabetically.

As another example, given the string "google", you should return "elgoogle".
 */

/**
 * @brief 
 * b acabad dabaca b acabad
 * b a cabad dabac a cabad
 * ba c abad daba c abad
 * bac a bad bdabc a cbadb
 */

using namespace std;

unordered_map<string, string> memo;
string str;

void Input() {
    cin >> str;
}

string Solve(std::string str) {
    if(memo.count(str)) {
        return memo[str];
    }

    if(str.length() <= 1) {
        return str;
    }

    string ret;
    if(str.front() == str.back()) {
        ret = str.front() + Solve(str.substr(1, str.length()-2)) + str.front();
    } else {
        string left = str.front() +Solve(str.substr(1, str.length()-1)) + str.front();
        string right = str.back() +Solve(str.substr(0, str.length()-1)) + str.back();

        if(left.length() < right.length()) {
            ret = left;
        } else if (left.length() > right.length()) {
            ret = right;
        }

        ret = min(left, right);
    }

    memo[str] = ret;
    return ret;
}

void solve() {
    Input();
    cout << Solve(str) << endl;
}

int main(void) {
    solve();
}