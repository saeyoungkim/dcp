/**
 * @file p127.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Let's represent an integer in a linked list format by having each node represent a digit in the number. The nodes make up the number in reversed order.

For example, the following linked list:

1 -> 2 -> 3 -> 4 -> 5
is the number 54321.

Given two linked lists in this format, return their sum in the same linked list format.

For example, given

9 -> 9
5 -> 2
return 124 (99 + 25) as:

4 -> 2 -> 1
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* next = nullptr;

    Node(int _v): val(_v) {};
    Node(int _v, Node* _n) : val(_v), next(_n) {};
};

Node* sum(Node* a, Node* b) {
    int carry = 0;
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    while(a || b || carry) {
        if(a) {
            carry += a->val;
            a = a->next;
        }
        if(b) {
            carry += b->val;
            b = b->next;
        }

        curr->next = new Node(carry % 10);
        carry /= 10;

        curr = curr->next;
    }

    return dummy->next;
}

int main() {
    Node* a = new Node(9, new Node(9));
    Node* b = new Node(9, new Node(9, new Node(9)));

    Node* ret = sum(a,b);

    while(ret) {
        cout << ret->val << " ";
        ret = ret->next;
    }
}