/**
 * @file p123.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by LinkedIn.

Given a string, return whether it represents a number. Here are the different kinds of numbers:

"10", a positive integer
"-10", a negative integer
"10.1", a positive real number
"-10.1", a negative real number
"1e5", a number in scientific notation
And here are examples of non-numbers:

"a"
"x 1"
"a -2"
"-"
 */

#include <iostream>

using namespace std;

bool is_ch_number(const char& c) {
    return '0' <= c and c <= '9';
}

bool is_number(const string& str) {
    // [-+]?[1-9]+[.]?[1-9]+e[1-9]+
    //  1    2    3    4   5  6
    // It is ok to satisfy step 2, 4, 6
    int step = 1;
    int i = 0;

    while(i < str.length()) {
        switch(step) {
            case 1: // check has + or -
                if(str.front() == '-' or str.front() == '+') {
                    i++;
                    step = 2;
                } else if(is_ch_number(str.front())) {
                    step = 2;
                } else {
                    return false;
                }
                break;
            case 2: // check has numeric thing til point appear
                
        }
    }

    return step == 2 or step == 4 or step == 6;
}

int main() {

}