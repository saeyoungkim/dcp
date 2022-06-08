/**
 * @file p228.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Twitter.

Given a list of numbers, create an algorithm that arranges them in order to form the largest possible integer. For example, given [10, 7, 76, 415], you should return 77641510.
 */

/**
 * @brief 
 * given [10, 7, 76, 415], you should return 77641510.
 * 
 * [10, 7, 79, 415] 79741510
 * 
 * 759 75
 * 7 759
 * 7 75
 * 7123 745
 */

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string getMaxNumber(vector<int>& list) {
    sort(list.begin(), list.end(), [](const int a, const int b) {
        string as = to_string(a);
        string bs = to_string(b);

        int aIdx = 0, bIdx = 0;

        while(aIdx < as.length() and bIdx < bs.length()) {
            if(as[aIdx] != bs[bIdx]) break;

            aIdx++;
            bIdx++;
        }

        if(aIdx == as.length() and bIdx == bs.length()) return a >= b;
        else if(aIdx == as.length()) {
            return bs[bIdx] > as[0];
        }
        else if(bIdx == bs.length()) {
            return as[aIdx] > bs[0];
        }

        return as[aIdx] > bs[bIdx];
    });

    stringstream ss;

    for_each(list.begin(), list.end(), [&](const int v) {
        ss << v;
    });

    return ss.str();
}

string getMax2Number(vector<int>& list) {
    sort(list.begin(), list.end(), [](const int a, const int b) {
        string as = to_string(a);
        string bs = to_string(b);

        return as + bs < bs + as ? false : true;
    });

    stringstream ss;

    for_each(list.begin(), list.end(), [&](const int v) {
        ss << v;
    });

    return ss.str();
}

int main() {
    vector<int> list1 = {10,7,76,415};
    vector<int> list2 = {10,7,79,415};

    cout << getMaxNumber(list1) << endl;
    cout << getMaxNumber(list2) << endl;

    cout << "=================================" << endl;

    cout << getMaxNumber(list1) << endl;
    cout << getMaxNumber(list2) << endl;
}