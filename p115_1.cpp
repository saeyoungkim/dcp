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

void gen_val_str(vector<string>& arr, Node* n) {
    if(not n) {
        return ;
    }

    arr.push_back(to_string(n->val));
    gen_val_str(arr, n->left);
    gen_val_str(arr, n->right);
}

bool is_subtree(Node* s, Node* t) {
    vector<string> s_arr, t_arr;
    gen_val_str(s_arr,s);
    gen_val_str(t_arr,t);

    string s_str = "", t_str = "";

    for_each(s_arr.begin(), s_arr.end(), [&](const string& s) {
        s_str += s + ",";
    });
    
    for_each(t_arr.begin(), t_arr.end(), [&](const string& s) {
        t_str += s + ",";
    });

    return s_str.find(t_str) != string::npos;
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