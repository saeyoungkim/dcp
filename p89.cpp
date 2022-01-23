/**
 * @file p89.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by LinkedIn.

Determine whether a tree is a valid binary search tree.

A binary search tree is a tree with two children, left and right, and satisfies the constraint that the key in the left child must be less than or equal to the root and the key in the right child must be greater than or equal to the root.
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int _v) : val(_v) , left(nullptr) , right(nullptr) {};
    Node(int _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {};
};

Node* _prev = nullptr;

bool is_valid(Node* root) {
    if(not root) {
        return true;
    }

    if(not is_valid(root->left)) {
        return false;
    }

    if(_prev and _prev->val > root->val) {
        return false;
    }

    _prev = root;

    return is_valid(root->right);
}

int  main() {
    Node* root = new Node(10, new Node(8, new Node(2), new Node(7)), new Node(12, new Node(11), new Node(16)));

    cout << boolalpha << is_valid(root) << endl;
}