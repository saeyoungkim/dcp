/**
 * @file p107.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * Print the nodes in a binary tree level-wise. For example, the following should print 1, 2, 3, 4, 5.

  1
 / \
2   3
   / \
  4   5
 */

#include <iostream>
#include <queue>

struct Node {
    int val;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int _v) : val(_v) {};
    Node(int _v, Node *_l, Node *_r) : val(_v), left(_l), right(_r) {};
};

using namespace std;

void print(Node* root) {
    queue<Node*> q;
    q.push(root);

    while(not q.empty()) {
        Node* f = q.front();
        q.pop();

        if(f) {
            cout << f->val << " ";
            q.push(f->left);
            q.push(f->right);
        } 
    }
    cout << endl;
}

int main() {
    Node* root = new Node(1, new Node(2), new Node(3, new Node(4), new Node(5)));

    print(root);
}