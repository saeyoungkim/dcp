/**
 * @file p76.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-29
 * 
 * @copyright Copyright (c) 2021
 * 
You are given an N by M 2D matrix of lowercase letters. Determine the minimum number of columns that can be removed to ensure that each row is ordered from top to bottom lexicographically. That is, the letter at each column is lexicographically later as you go down each row. It does not matter whether each row itself is ordered lexicographically.

For example, given the following table:

cba
daf
ghi
This is not ordered because of the a in the center. We can remove the second column to make it ordered:

ca
df
gi
So your function should return 1, since we only needed to remove 1 column.

As another example, given the following table:

abcdef
Your function should return 0, since the rows are already ordered (there's only one row).

As another example, given the following table:

zyx
wvu
tsr
Your function should return 3, since we would need to remove all the columns to order it.
 */
#include <vector>
#include <iostream>

using namespace std;

int main(void) {
    vector<string> matrix;

    matrix.push_back("cba");
    matrix.push_back("daf");
    matrix.push_back("ghi");

    int count = 0;
    for(int i = 0; i < matrix.front().size(); i++) {
        char prev = matrix[0][i];
        for(int j = 1; j < matrix.size(); j++) {
            if(prev > matrix[j][i]) {
                count++;
                break;
            }
            prev = matrix[j][i];
        }
    }

    cout << count << endl;
}