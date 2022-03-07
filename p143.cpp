/**
 * @file p143.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Amazon.

Given a pivot x, and a list lst, partition the list into three parts.

The first part contains all elements in lst that are less than x
The second part contains all elements in lst that are equal to x
The third part contains all elements in lst that are larger than x
Ordering within a part can be arbitrary.

For example, given x = 10 and lst = [9, 12, 3, 5, 14, 10, 10], one partition may be [9, 3, 5, 10, 10, 12, 14].
 */

#include <vector>
#include <iostream>

using namespace std;

void classify(int pivot, vector<int>& lst) {
    int less_cur = 0;
    int more_cur = lst.size();

    int idx = 0;
    while(idx < more_cur) {
        if(lst[idx] < pivot) {
            swap(lst[less_cur++], lst[idx++]);
        } else if(lst[idx] > pivot) {
            swap(lst[--more_cur], lst[idx]);
        } else {
            idx++;
        }
    }
}

int main() {
    vector<int> lst = {9,12,3,5,14,10,10};
    // vector<int> lst = {9,12,10};

    int pivot;
    cin >> pivot;

    for_each(lst.begin(), lst.end(), [](const int v) {
        cout << v << " ";
    });
    cout << endl;

    classify(pivot, lst);

    for_each(lst.begin(), lst.end(), [](const int v) {
        cout << v << " ";
    });
    cout << endl;
}