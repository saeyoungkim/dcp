/**
 * @file p50.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
This problem was asked by Microsoft.

Suppose an arithmetic expression is given as a binary tree. Each leaf is an integer and each internal node is one of '+', '−', '∗', or '/'.

Given the root to such a tree, write a function to evaluate it.

For example, given the following tree:

    *
   / \
  +    +
 / \  / \
3  2  4  5
You should return 45, as it is (3 + 2) * (4 + 5).
 */

#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> op({"+", "*", "-", "/"});

struct Node {
    string val;
    Node* left;
    Node* right;
    Node(string _v) : val(_v), left(nullptr), right(nullptr) {}
    Node(string _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {}
};

Node* root = nullptr;

void input() {
    root = new Node("*", new Node("+", new Node("3"), new Node("2")), new Node("+", new Node("4"), new Node("5")));
}

int calc(Node* root) {
    if(!root) {
        return INT_MIN;
    }

    if(op.count(root->val)) {
        int left = calc(root->left);
        int right = calc(root->right);

        if(root->val == "+") {
            return left + right;
        } else if(root->val == "-") {
            return left - right;
        } else if (root->val == "*") {
            return left * right;
        } else if (root->val == "/") {
            return left / right;
        } 
    }

    return stoi(root->val);
}

void solve() {
    cout << calc(root) << endl;
}

int main() {
    input();
    solve();
}