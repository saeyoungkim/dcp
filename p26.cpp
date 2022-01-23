#include <iostream>

/**
 * @brief 
 * Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

Given a singly linked list and an integer k, remove the kth last element from the list. k is guaranteed to be smaller than the length of the list.

The list is very long, so making more than one pass is prohibitively expensive.

Do this in constant space and in one pass.
 */

struct Node {
    int val;
    Node* next;

    Node(int _v, Node* _n) : val(_v), next(_n) {};
};

int solve(Node** head_ptr, const int& k) {
    if(!*head_ptr) {
        return 0;
    }

    int nth = solve(&(*head_ptr)->next, k);

    if(nth == k-1) {
        *head_ptr = (*head_ptr)->next;
    } 

    return nth+1;
}

int main(void) {
    Node* head = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5, nullptr)))));
    int k;
    std::cin >> k;
    solve(&head, k);  

    Node* curr = head;
    while(curr) {
        std::cout << curr->val << " -> " ;
        curr = curr->next;
    }
    std::cout << std::endl;
}