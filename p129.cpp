/**
 * @file p129.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-21
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a real number n, find the square root of n. For example, given n = 9, return 3.
 */

#include <iostream>

#define OMEGA 1e-6

using namespace std;

double _sqrt(double l, double r, double n) {
    double mid = (l + r) / 2.0;

    double pow_mid = mid*mid;
    if(pow_mid == n or (-OMEGA <= pow_mid - n and pow_mid - n <= OMEGA)) return mid;
    else if(pow_mid > n) return _sqrt(l, mid, n);
    return _sqrt(mid,r,n);
}

double Sqrt(double n) {
    return _sqrt(0.0, n, n);
}

int main() {
    double n;
    cin >> n;

    cout << Sqrt(n) << endl;
}