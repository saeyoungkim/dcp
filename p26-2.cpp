#include <iostream>

struct Node {
    int val;
    Node* next;

    Node(int _v, Node* _n) : val(_v), next(_n) {};
};

Node* solve(Node* head, int k) {
    Node* dummy = new Node(-1, head);

    Node* slow = dummy;
    Node* fast = dummy;

    while(k--) {
        fast = fast->next;
    }

    while(fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return dummy->next;    
}

int main(void) {
    Node* head = new Node(1, new Node(2, new Node(3, new Node(4, new Node(5, nullptr)))));
    int k;
    std::cin >> k;
    head = solve(head, k);

    while(head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}