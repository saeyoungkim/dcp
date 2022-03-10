/**
 * @file p146.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * This question was asked by BufferBox.

Given a binary tree where all nodes are either 0 or 1, prune the tree so that subtrees containing all 0s are removed.

For example, given the following tree:

   0
  / \
 1   0
    / \
   1   0
  / \
 0   0
should be pruned to:

   0
  / \
 1   0
    /
   1
We do not remove the tree at the root or its left child because it still has a 1 as a descendant.
 */

#include <iostream>
#include "Node.hpp"

using namespace std;

bool delete_do_not_has_1(Node* r) {
    if(not r) {
        return false ;
    }

    bool left_has_1 = delete_do_not_has_1(r->left);
    bool right_has_1 = delete_do_not_has_1(r->right);

    if(not left_has_1) {
        r->left = nullptr;
    }
    if(not right_has_1) {
        r->right = nullptr;
    }

    return left_has_1 or right_has_1 or r->val == 1;
}

Node* prune(Node* root) {
    bool ret = delete_do_not_has_1(root);
    if(not ret) {
        return nullptr;   
    }

    return root;
}

int main() {
    Node* root = new Node(0, new Node(1), new Node(0, new Node(0, new Node(0), new Node(0)), new Node(0)));

    printBT(root);

    Node* ret = prune(root);

    printBT(ret);
}