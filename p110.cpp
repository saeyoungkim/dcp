/**
 * @file p110.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Facebook.

Given a binary tree, return all paths from the root to leaves.

For example, given the tree:

   1
  / \
 2   3
    / \
   4   5
Return [[1, 2], [1, 3, 4], [1, 3, 5]].
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> paths;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int _v) : val(_v) {};
    Node(int _v, Node *_l, Node *_r) : val(_v), left(_l), right(_r) {};
};

void findRootPath(Node* r, vector<int>& path) {
    if(not r) {
        return ;
    } 

    path.push_back(r->val);

    // if leaf node
    if(not r->left and not r->right) {
        paths.push_back(path);
    }

    if(r->left) findRootPath(r->left, path);
    if(r->right) findRootPath(r->right, path);

    path.pop_back();
}

int main() {
    Node* root = new Node(1, new Node(2), new Node(3, new Node(4), new Node(5, new Node(6), nullptr)));

    vector<int> path;

    findRootPath(root, path);

    for(auto p : paths) {
        cout << "[ ";
        for_each(p.begin(), p.end(), [](const int v) {
            cout << v << ", ";
        });
        cout << "]" << endl;
    }
}