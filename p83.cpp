/**
 * @file p83.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * his problem was asked by Google.

Invert a binary tree.

For example, given the following tree:

    a
   / \
  b   c
 / \  /
d   e f
should become:

  a
 / \
 c  b
 \  / \
  f e  d
 */
#include <iostream>

using namespace std;

struct Node {
    char val;
    Node* left;
    Node* right;

    Node(char _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(char _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {};
};

void reverse(Node* root) {
    if(!root) {
        return ;
    }

    reverse(root->left);
    reverse(root->right);

    Node* tmp = root->left;
    root->left = root->right;
    root->right = tmp;

    return ;
}

int main() {
    Node* root = new Node('a', new Node('b', new Node('d'), new Node('e')), new Node('c', new Node('f'), nullptr));

    cout << root->left->left->val << endl;
    cout << root->right->left->val << endl;


    reverse(root);

    cout << root->right->right->val << endl;
    cout << root->left->right->val << endl;

}