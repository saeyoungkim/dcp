/**
 * @file p242.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Twitter.

You are given an array of length 24, where each element represents the number of new subscribers during the corresponding hour. Implement a data structure that efficiently supports the following:

update(hour: int, value: int): Increment the element at index hour by value.
query(start: int, end: int): Retrieve the number of subscribers that have signed up between start and end (inclusive).
You can assume that all values get cleared at the end of the day, and that you will not be asked for start and end values that wrap around midnight.
 */

#include <iostream>
#include <vector>

using namespace std;

class SegmentTreeNode {
    int lRange = -1;
    int rRange = -1;
    int sum = 0;
    SegmentTreeNode* left = nullptr;
    SegmentTreeNode* right = nullptr;

public:

    int init(int lr, int rr, const vector<int>& arr) {
        if(lr > rr) return 0;
        else if(lr == rr) {
            this->lRange = lr;
            this->rRange = rr;
            sum = arr[lr];

            return sum;
        }

        left = new SegmentTreeNode();
        right = new SegmentTreeNode();

        int mid = lr + ((rr-lr) >> 1);

        this->lRange = lr;
        this->rRange = rr;

        this->sum = left->init(lr, mid, arr) + right->init(mid+1, rr, arr) + arr[lr];

        return this->sum;
    } 

    int update(int idx, int value) {
        if(lRange == rRange and lRange == idx) {
            int diff = value - sum;
            sum += diff;

            return diff;
        }

        int mid = lRange + ((rRange - lRange) >> 1);

        int diff = idx <= mid ? left->update(idx, value) : right->update(idx, value);

        sum += diff;

        return diff;
    }

    int getSum(int l, int r) {
        if(lRange == l and rRange == r) return sum;

        int mid = lRange + ((rRange - lRange) >> 1);

        if(r <= mid) return left->getSum(l,r);
        else if(mid < l) return right->getSum(l,r);

        return left->getSum(l,mid) + right->getSum(mid+1,r);
    }
};

int main() {
    vector<int> arr(24,0);

    SegmentTreeNode* r = new SegmentTreeNode();
    r->init(0, arr.size()-1, arr);

    r->update(4,10);
    r->update(2,22);
    r->update(0,1);
    r->update(6,10);

    cout << r->getSum(0,5) << endl;

    r->update(3,5);
    r->update(2,12);

    cout << r->getSum(0,5) << endl;
}