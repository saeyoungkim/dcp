/**
 * @file p48.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
Given pre-order and in-order traversals of a binary tree, write a function to reconstruct the tree.

For example, given the following preorder traversal:

[a, b, d, e, c, f, g]

And the following inorder traversal:

[d, b, e, a, f, c, g]

You should return the following tree:

    a
   / \
  b   c
 / \ / \
d  e f  g
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Node {
    char c;
    Node* left = nullptr;
    Node* right = nullptr;
};

vector<char> pre_order = {'a','b','d','e','c','f','g'};
vector<char> in_order = {'d','b','e','a','f','c','g'};
unordered_map<char, int> in_order_idx;

Node* solve(const vector<char>& pre_order, int p_l, int p_r, const vector<char>& in_order, int i_l, int i_r) {
    Node* root = nullptr;
    if(p_l <= p_r && i_l <= i_r) {
        root = new Node();
        root->c = pre_order[p_l];
        int idx = in_order_idx[root->c]; 
        root->left = solve(pre_order, p_l+1, p_l+idx-i_l, in_order, i_l, idx-1);
        root->right = solve(pre_order, p_l+idx-i_l+1, p_r, in_order, idx+1, i_r);
    }

    return root;
}

void input() {
    for(int i = 0; i < in_order.size(); i++) {
        in_order_idx[in_order[i]] = i;
    }
}

void print_inorder(Node* root) {
    if(root) {
        print_inorder(root->left);
        cout << root->c << ", ";
        print_inorder(root->right);
    }
}

void print_preorder(Node* root) {
    if(root) {
        cout << root->c << ", ";
        print_preorder(root->left);
        print_preorder(root->right);
    }    
}

int main(void) {
    input();
    int N = pre_order.size()-1;
    Node* root = solve(pre_order, 0, N, in_order, 0, N);
    print_inorder(root);
    cout << endl;
    print_preorder(root);
}