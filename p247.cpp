/**
 * @file p247.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a binary tree, determine whether or not it is height-balanced. A height-balanced binary tree can be defined as one in which the heights of the two subtrees of any node never differ by more than one.
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int _v = 0, Node* _l = nullptr, Node* _r = nullptr) : val(_v), left(_l), right(_r) {};
};

struct Balance {
    int height;
    bool isBalanced;

    Balance(int _h = 0, bool _isB = true) : height(_h), isBalanced(_isB) {};
};

Balance getBalance(Node* root) {
    if(not root) return Balance();

    Balance l = getBalance(root->left);
    Balance r = getBalance(root->right);

    int h = max(l.height, r.height) + 1;
    bool isBalanced = l.isBalanced && r.isBalanced && abs(l.height - r.height) <= 1;

    return Balance(h, isBalanced);
}

int main() {
    Node* r = new Node(1, new Node(2, new Node(3, new Node(4))), new Node(6, nullptr, new Node(7)));

    cout << boolalpha << getBalance(r).isBalanced << endl;
}