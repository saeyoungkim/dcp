/**
 * @file p104.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-26
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Determine whether a doubly linked list is a palindrome. What if it’s singly linked?

For example, 1 -> 4 -> 3 -> 4 -> 1 returns True while 1 -> 4 returns False.
 */
#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* next = nullptr;

    Node(int _v) : val(_v), next(nullptr) {};

    Node* append(Node* n) {
        this->next = n;

        return n;
    }
};

Node* reverse_node(Node* n) {
    Node* prev = nullptr;
    Node* tmp;
    while(n) {
        tmp = n->next;
        n->next = prev;
        prev = n;
        n = tmp;
    }

    return prev; 
}

bool isPalinedrome(Node* n) {
    Node* slow = n;
    Node* fast = n;
    while(fast and fast->next and fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* half = slow->next;
    
    half = reverse_node(half);

    while(half and n) {
        if(half->val != n->val) {
            return false;
        }
        half = half->next;
        n = n->next;
    }

    return true;
}

int main() {
    Node* n = new Node(1);
    n->append(new Node(4))->append(new Node(3))->append(new Node(4))->append(new Node(1));

    Node* n2 = new Node(1);
    n2->append(new Node(4));

    Node* n3 = new Node(1);

    cout << boolalpha << isPalinedrome(n) << endl;
    cout << boolalpha << isPalinedrome(n2) << endl;
    cout << boolalpha << isPalinedrome(n3) << endl;
}


