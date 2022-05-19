/**
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-18
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Snapchat.

Given a string of digits, generate all possible valid IP address combinations.

IP addresses must follow the format A.B.C.D, where A, B, C, and D are numbers between 0 and 255. Zero-prefixed numbers, such as 01 and 065, are not allowed, except for 0 itself.

For example, given "2542540123", you should return ['254.25.40.123', '254.254.0.123'].
 */
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

bool isValid(const string& str) {
    if(str[0] == '0') {
        return str.size() == 1;
    }

    int t = stoi(str);

    return 0 <= t and t < 256;
}

void _splitted(const string& str, int idx, vector<string>& curr, vector<string>& tmp) {
    if(str.length() == idx) {
        if(curr.size() == 4) {
            stringstream ss;
            for(const auto& p : curr) {
                ss << p << ".";
            }

            string ip = ss.str();

            ip.pop_back();

            tmp.push_back(ip);
        }
        return ;
    } 

    for(int l = 1; l < 4; l++) {
        string sub = str.substr(idx,l);
        if(idx+l <= str.length() and isValid(sub)) {
            curr.push_back(sub);
            _splitted(str,idx+l,curr,tmp);
            curr.pop_back();
        }
    }
}

vector<string> splitted(const string& str) {
    vector<string> tmp;
    vector<string> curr;

    _splitted(str, 0, curr, tmp);

    return tmp;
}

int main() {
    string str;
    cin >> str;

    vector<string> v = splitted(str);

    for_each(v.begin(), v.end(), [](const string& s) {
        cout << s << " ";
    });
    cout << endl;
}