/**
 * @file p133.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-25
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Amazon.

Given a node in a binary search tree, return the next bigger element, also known as the inorder successor.

For example, the inorder successor of 22 is 30.

   10
  /  \
 5    30
     /  \
   22    35
You can assume each node has a parent pointer.
 */

#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
    Node* parent = nullptr;
    
    Node(int _v) : val(_v) {};
    Node(int _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {
        if(_l) {
            _l->parent = this;
        }
        if(_r) {
            _r->parent = this;
        }
    }
};

int nextBiggest(Node* r, int v) {
    if(not r) {
        return -1;
    }

    if(r->val != v) {
        int left = nextBiggest(r->left, v);
        int right = nextBiggest(r->right, v);

        if((left != -1)) return left;
        if((right != -1)) return right;

        return -1;
    }

    if(r->right) {
        Node* ret = r->right;

        while(ret->left) {
            ret = ret->left;
        }

        return ret->val;
    }

    Node* curr = r;
    Node* par = r->parent;
    while(par and par->right == curr) {
        curr = par;
        par = curr->parent;
    }

    if(not par) {
        return -1;
    }

    return par->val;
}

int main() {
    Node* root = new Node(10, new Node(5), new Node(30, new Node(22), new Node(35)));

    cout << nextBiggest(root, 10) << endl;
    cout << nextBiggest(root, 30) << endl;
    cout << nextBiggest(root, 22) << endl;
    cout << nextBiggest(root, 35) << endl;
}