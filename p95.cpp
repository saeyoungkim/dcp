/**
 * @file p95.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Palantir.

Given a number represented by a list of digits, find the next greater permutation of a number, in terms of lexicographic ordering. If there is not greater permutation possible, return the permutation with the lowest value/ordering.

For example, the list [1,2,3] should return [1,3,2]. The list [1,3,2] should return [2,1,3]. The list [3,2,1] should return [1,2,3].

Can you perform the operation without allocating extra memory (disregarding the input memory)?
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr1 = {1,2,3};
vector<int> arr2 = {1,3,2};
vector<int> arr3 = {3,2,1};

vector<int> nextPermutation(const vector<int>& b) {
    vector<int> a = b;

    if(a.size() <= 1){
        return a;
    }

    int nextDescending = -1;
    for(int i = a.size()-2; i >= 0; i--) {
        if(a[i] < a[i+1]) {
            nextDescending = i;
            break;
        }
    }

    if(nextDescending == -1) {
        sort(a.begin(), a.end());
        return a;
    }

    int candidate = -1;
    for(int i = a.size()-1; i >= 0; i--) {
        if(a[i] > a[nextDescending]) {
            candidate = i;
            break;
        }
    }

    swap(a[candidate], a[nextDescending]);
    sort(a.begin()+nextDescending+1, a.end());

    return a;
}

int main() {
    vector<int> n1 = nextPermutation(arr1);
    vector<int> n2 = nextPermutation(arr2);
    vector<int> n3 = nextPermutation(arr3);

    for_each(n1.begin(), n1.end(), [](const int a) {
        cout << a << " ";
    });
    cout << endl;

    for_each(n2.begin(), n2.end(), [](const int a) {
        cout << a << " ";
    });
    cout << endl;

    for_each(n3.begin(), n3.end(), [](const int a) {
        cout << a << " ";
    });
    cout << endl;
}