/**
 * @file p115.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given two non-empty binary trees s and t, check whether tree t has exactly the same structure and node values with a subtree of s. A subtree of s is a tree consists of a node in s and all of this node's descendants. The tree s could also be considered as a subtree of itself.
 */

#include <vector>
#include <iostream>

struct Node {
    int val;
    Node *left, *right;
    
    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node *l, Node *r) : val(_v), left(l), right(r) {};
};

using namespace std;

void getCands(vector<Node*>& cands, Node* s, Node* t) {
    if(not s or not t){
        return ;
    }

    if(s->val == t->val) {
        cands.push_back(s);
    }

    getCands(cands,s->left,t);
    getCands(cands,s->right,t);
}

bool _is_subtree(Node* s, Node* t) {
    if(not t) {
        return true;
    }

    if(not s) {
        return false;
    }

    return s->val == t->val and _is_subtree(s->left,t->left) and _is_subtree(s->right,t->right);
}

bool is_subtree(Node* s, Node* t) {
    if(not t) {
        return true;
    }

    vector<Node*> cands;

    getCands(cands,s,t);

    for(auto cand : cands) {
        bool ret = _is_subtree(cand, t);
        if(ret) {
            return true;
        }
    }

    return false;
}

int main() {
    Node* s = new Node(100, new Node(10, new Node(20, new Node(60, new Node(70), nullptr), nullptr), new Node(30)), new Node(5));
    Node* t1 = new Node(100, new Node(10, new Node(20), nullptr), nullptr);
    Node* t2 = new Node(10, new Node(20, new Node(60), nullptr), nullptr);
    Node* t3 = new Node(10, new Node(20, new Node(61), nullptr), nullptr);
    Node* t4 = new Node(100, new Node(10, new Node(20, new Node(60, new Node(70), nullptr), nullptr), new Node(30)), new Node(5));

    cout << boolalpha << is_subtree(s, t1) << endl;
    cout << boolalpha << is_subtree(s, t2) << endl;
    cout << boolalpha << is_subtree(s, t3) << endl;
    cout << boolalpha << is_subtree(s, t4) << endl;
}