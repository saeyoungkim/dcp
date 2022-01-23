/**
 * @file p61.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 * Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.

Do this faster than the naive method of repeated multiplication.

For example, pow(2, 10) should return 1024
 */
#include <iostream>

using namespace std;

long long x,y;

int main() {
    cin >> x >> y;

    if(y == 0) {
        cout << 1 << endl;
        return 0;
    }

    bool is_minus = false;
    if(x < 0) {
        is_minus = true;
        x = -x;
    }

    bool be_divided = false;
    if(y < 0) {
        be_divided = true;
        y = -y;
    }

    long long i = 1;
    long long tmp = x;
    long long ans = 1;
    while(y) {
        ans *= tmp;
        y -= i;

        i <<= 1;
        tmp *= tmp;

        if(i > y) {
            i = 1;
            tmp = x;
        }
    }
    ans = is_minus && (y & 1) ? -ans : ans;

    cout << (be_divided ? 1.0 / ans : ans) << endl;
    return 0;
}