/**
 * @file p112.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Twitter.

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree. Assume that each node in the tree also has a pointer to its parent.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”
 */
#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* parent;
    Node* left;
    Node* right;
    Node(int _v) : val(_v), parent(nullptr), left(nullptr), right(nullptr) {};
    Node(int _v,  Node* l, Node* r) : val(_v), parent(nullptr), left(l), right(r) {
        if(l) l->parent = this;
        if(r) r->parent = this;
    } 
};

/**
 * 1. find depth and adjust depth to be equal. finally we iterate two node til we find same parents
 */
pair<Node*, int> find(int v, Node* r) {
    if(!r) {
        return make_pair(nullptr,0);
    }

    if(r->val == v) {
        return {r,1};
    }

    pair<Node*, int> left = find(v, r->left);
    pair<Node*, int> right = find(v, r->right);

    return left.first ? make_pair(left.first, left.second+1) : make_pair(right.first, right.second+1);
}

Node* getLCA1(int a, int b, Node* r) {
    pair<Node*, int> p1 = find(a, r);
    pair<Node*, int> p2 = find(b, r);

    Node* n1 = p1.first; 
    Node* n2 = p2.first;
    
    if(p1.second > p2.second) {
        while(p1.second > p2.second) {
            p1.second--;
            n1 = n1->parent;
        }
    } else {
        while(p2.second > p1.second) {
            p2.second--;
            n2 = n2->parent;
        }
    }

    while(n1 != n2) {
        n1 = n1->parent;
        n2 = n2->parent;
    }

    return n1;
}

/**
 * 2. bottom-up approach
 */

Node* getLCA2(int a, int b, Node* r) {
    if(!r) {
        return nullptr;
    }

    if(r->val == a or r->val == b) {
        return r;
    }

    Node* left = getLCA2(a,b,r->left);
    Node* right = getLCA2(a,b,r->right);

    if(left and right) {
        return r;
    }

    return left ? left : right;
}




int main() {
    Node* root = new Node(1,new Node(2, new Node(-1), nullptr), new Node(10, new Node(15), new Node(18, new Node(163), new Node(1999))));

    cout << getLCA1(1,2,root)->val << endl;
    cout << getLCA1(-1,1999,root)->val << endl;
    cout << getLCA1(1,2,root)->val << endl;
    cout << getLCA1(15,1999,root)->val << endl;
    cout << getLCA1(15,163,root)->val << endl;
    cout << getLCA1(15,18,root)->val << endl;

    cout << "==========" << endl;

    cout << getLCA2(1,2,root)->val << endl;
    cout << getLCA2(-1,1999,root)->val << endl;
    cout << getLCA2(1,2,root)->val << endl;
    cout << getLCA2(15,1999,root)->val << endl;
    cout << getLCA2(15,163,root)->val << endl;
    cout << getLCA2(15,18,root)->val << endl;
}