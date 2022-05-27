/**
 * @file p216.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-23
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a number in Roman numeral format, convert it to decimal.

The values of Roman numerals are as follows:

{
    'M': 1000,
    'D': 500,
    'C': 100,
    'L': 50,
    'X': 10,
    'V': 5,
    'I': 1
}
In addition, note that the Roman numeral system uses subtractive notation for numbers such as IV and XL.

For the input XIV, for instance, you should return 14.
 */

#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char,int> roman2Integer = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    stack<int> stk;
    
    for(auto ch : s) {
        if(stk.empty()) {
            stk.push(roman2Integer[ch]);
        } else {
            int t = stk.top();
            stk.pop();
            
            int c = roman2Integer[ch];
            if(t < c) {
                t *= -1; 
            }
            
            stk.push(t);
            stk.push(c);
        }
    }
    
    int ans = 0;
    while(!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }
    
    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << romanToInt(s) << endl;
}