#include <iostream>

/**
 * @brief 
 * This problem was asked by Dropbox.

Given the root to a binary search tree, find the second largest node in the tree.
 */

/**
 * @brief 
 * 1. find the parent of most right node
 * 2. if parent is equal to root,
 * 3. go left node and find the most right node
 */

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {};
};

Node* head = nullptr;

void Input() {
    head = new Node(5, new Node(-4, new Node(-12, new Node(-40), new Node(-6)), new Node(0, nullptr, new Node(3))), new Node(15, new Node(8), new Node(22)));
}

void Solve() {
    if(!head) {
        std::cout << "there is no value of the second largest value" << std::endl;
        return ;
    }

    Node* ret = nullptr;
    Node* curr = head;

    while(curr && curr->right) {
        ret = curr;
        curr = curr->right;
    }

    if(ret != nullptr) {
        std::cout << ret->val << std::endl;
        return ;
    }

    ret = head->left;

    while(ret->right) {
        ret = ret->right;
    }

    std::cout << ret->val << std::endl;
    return ;
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}