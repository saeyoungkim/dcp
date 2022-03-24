/**
 * @file p161.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-03-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given a 32-bit integer, return the number with its bits reversed.

For example, given the binary number 1111 0000 1111 0000 1111 0000 1111 0000, return 0000 1111 0000 1111 0000 1111 0000 1111
 */
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<32> b("11110000111100001111000011110000");

    cout << b.to_string() << endl;

    bitset<32> rb((b.to_ulong() ^ -1));

    cout << rb.to_string() << endl;
}