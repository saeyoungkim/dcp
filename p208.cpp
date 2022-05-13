/**
 * @brief 
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by LinkedIn.

Given a linked list of numbers and a pivot k, partition the linked list so that all nodes less than k come before nodes greater than or equal to k.

For example, given the linked list 5 -> 1 -> 8 -> 0 -> 3 and k = 3, the solution could be 1 -> 0 -> 5 -> 8 -> 3.
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int _v, Node* _n) : val(_v), next(_n) {};
};

void print(Node* l) {
    while(l != nullptr) {
        cout << l->val << " ";
        l = l->next;
    }

    cout << endl;
}

Node* classify(Node* l, int k) {
    Node* startSmaller = new Node(INT_MIN, nullptr);
    Node* smallercursor = startSmaller;

    Node* dummy = new Node(INT_MIN, l);

    Node* prev = dummy;
    Node* curr = dummy->next;

    while(curr) {
        if(curr->val < k) {
            prev->next = curr->next;
            curr->next = nullptr;
            smallercursor->next = curr;
            smallercursor = smallercursor->next;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    smallercursor->next = dummy->next;

    return startSmaller->next;
}

int main() {
    Node* l = new Node(5, new Node(1, new Node(8, new Node(0, new Node(3,nullptr)))));

    int k ;
    cin >> k ;

    print(l);

    Node* l2 = classify(l, k);

    print(l2);
}