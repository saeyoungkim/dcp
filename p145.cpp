/**
 * @file p145.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given the head of a singly linked list, swap every two nodes and return its head.

For example, given 1 -> 2 -> 3 -> 4, return 2 -> 1 -> 4 -> 3.
 */

#include "Node.hpp"
#include <iostream>

using namespace std;

void swap_every_two_nodes(ListNode* n) {
    ListNode* curr = n;
    while(curr and curr->next) {
        ListNode* tmp = curr->next->next;
        int tmp_v = curr->val;
        curr->val = curr->next->val;
        curr->next->val = tmp_v;
        curr = tmp;
    }
}

int main() {
    ListNode* l = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

    ListNode* cur = l;
    while(cur) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;

    swap_every_two_nodes(l);

    cur = l;
    while(cur) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}