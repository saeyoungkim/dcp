/**
 * @file p80.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given the root of a binary tree, return a deepest node. For example, in the following tree, return d.

    a
   / \
  b   c
 /
d
 */

#include <iostream>

using namespace std;

struct Node {
    char val;
    Node *left;
    Node *right;
    Node(char _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(char _v, Node *_left, Node *_right) : val(_v), left(_left), right(_right) {};
};

pair<int,Node*> dfs(Node *curr) {
    if(!curr) {
        return make_pair(0,nullptr);
    }

    pair<int,Node*> left = dfs(curr->left);
    pair<int,Node*> right = dfs(curr->right);

    if(not left.second and not right.second)
        return make_pair(1,curr);
    
    return make_pair(max(left.first, right.first)+1, left.first > right.first ? left.second : right.second);
}

int main() {
    Node* root = new Node('a', new Node('b', new Node('d'), nullptr), new Node('c'));

    cout << dfs(root).second->val << endl;
}