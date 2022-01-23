/**
 * @file p94.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Given a binary tree of integers, find the maximum path sum between two nodes. The path must go through at least one node, and does not need to go through the root.
 */

#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node* _l, Node* _r) : val(_v) , left(_l), right(_r) {};
};

int ans = INT_MIN;

// return path from root to some node path that sum is maximum
// in process, we save maximum path left -> root -> right path
int calcMaxSumPath(Node* root) {
    if(!root) {
        return 0;
    }

    int l = calcMaxSumPath(root->left);
    int r = calcMaxSumPath(root->right);

    int l_root_r = l + root->val + r;
    int root_l = l + root->val;
    int root_r = r + root->val;

    ans = max(ans, max(l_root_r, max(root->val, max(root_l, root_r))));

    return max(root->val, max(root_l, root_r));
}

int main() {
    Node* root = new Node(-200, new Node(5, new Node(6), new Node(7)), new Node(16, new Node(11), new Node(20))); 

    calcMaxSumPath(root);

    cout << ans << endl;
}