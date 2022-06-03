/**
 * @file p223.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Palantir.

Typically, an implementation of in-order traversal of a binary tree has O(h) space complexity, where h is the height of the tree. Write a program to compute the in-order traversal of a binary tree using O(1) space.
 */

/**
 *      6
 *     /
 *    3
 *  /   \
 * 4     5
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int _v, Node* _l = nullptr, Node* _r = nullptr) : val(_v), left(_l), right(_r) {};
};

void printInOrder(Node* root) {
    Node* curr = root;
    while(curr) {
        if(not curr->left) {
            cout << curr->val << " ";
            curr = curr->right;
        } else {
            Node* desc = curr->left;
            while(desc->right) {
                desc = desc->right;
            }

            desc->right = curr;
            Node* tmp = curr->left;
            curr->left = nullptr;
            curr = tmp;
        }
    }
}

/**
 * @brief 
 *                    10
 *                  /     \
 *                50       30
 *              /    \   /    \
 *            20     -1 11    -5
 *                           /
 *                          6
 * @return int 
 */

int main() {
    Node* r = new Node(10, new Node(50, new Node(20), new Node(-1)), new Node(30, new Node(11), new Node(-5, new Node(6), nullptr)));
    // Node* r = new Node(10, new Node(50), new Node(30));

    printInOrder(r);
}