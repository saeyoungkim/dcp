/**
 * @file p109.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Cisco.

Given an unsigned 8-bit integer, swap its even and odd bits. The 1st and 2nd bit should be swapped, the 3rd and 4th bit should be swapped, and so on.

For example, 10101010 should be 01010101. 11100010 should be 11010001.

Bonus: Can you do this in one line?
 */

#include <iostream>
#include <bitset>

using namespace std;

void print(unsigned int v) {
    unsigned int mask = (unsigned int)1 << (sizeof(v) * CHAR_BIT - 1);
    do putchar(mask & v ? '1' : '0');
    while (mask >>= 1);
}

unsigned int swap_bits(unsigned int b) {
    return ((b & 85) << 1) | ((b & (85 << 1)) >> 1);
}

int main() {
    unsigned int l;
    cin >> l;
    print(l);
    cout << endl;
    print(swap_bits(l));
}