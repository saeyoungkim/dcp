#include <iostream>
#include <sstream>

/**
 * @brief 
 * Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. You can assume the string to be decoded is valid.
 */

std::string str;

void Input() {
    std::cin >> str;
}

std::string encode(const std::string& str) {
    std::stringstream ss;

    int count = -1;
    char curr;
    for(auto ch : str) {
        if(count == -1) {
            curr = ch;
            count = 1;
        } else if (curr == ch) {
            count++;
        } else {
            ss << count << curr;
            curr = ch;
            count = 1;
        }
    }

    ss << count << curr;

    return ss.str();
}

std::string decode(const std::string& str) {
    std::stringstream ss;

    int i = 0;
    int st = 0;
    while(i < str.length()-1) {
        while(isdigit(str[i])) {
            i++;
        }

        int count = std::stoi(str.substr(st, i - st));
        while(count-- > 0) {
            ss << str[i];
        }
        i++;
    }

    return ss.str();
}

void Solve() {
    std::cout << encode(str) << std::endl;
    std::cout << decode(encode(str)) << std::endl;
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}