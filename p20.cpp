#include <iostream>

struct Node {
    int val;
    Node *next;

    Node(int _v, Node* _n) : val(_v), next(_n) {};
};

void solve(Node* a, Node* b) {
    int a_len = 0, b_len = 0;

    Node* travel = a;
    while(travel) {
        a_len++;
        travel = travel->next;
    }

    travel = b;
    while(travel) {
        b_len++;
        travel = travel->next;
    }

    if(a_len > b_len) {
        int diff = a_len - b_len;
        while(diff-- > 0) {
            a = a->next;
        }
    } else if(a_len < b_len) {
        int diff = b_len - a_len;
        while(diff-- > 0) {
            b = b->next;
        }
    }

    while(a->val != b->val) {
        a = a->next;
        b = b->next;
    }

    std::cout << a->val << std::endl;
}

int main(void) {
    Node* a = new Node(3, new Node(7, new Node(8, new Node(10, NULL))));
    // Node* b = new Node(99, new Node(1, new Node(25, new Node(8, new Node(10, NULL)))));
    Node* b = new Node(10, NULL);
    solve(a, b);
}