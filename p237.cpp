/**
 * @file p237.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Amazon.

A tree is symmetric if its data and shape remain unchanged when it is reflected about the root node. The following tree is an example:

        4
      / | \
    3   5   3
  /           \
9              9
Given a k-ary tree, determine whether it is symmetric.
 */

#include <vector>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    vector<TreeNode*> children;

    TreeNode(int v, vector<TreeNode*> c) : val(v), children(c) {};
    TreeNode() : val(0) {};
    TreeNode(int v) : val(v) {};
};

bool _isSymmetric(TreeNode* l, TreeNode* r) {
    if(not l and not r) return true;
    else if(not l or not r) return false;

    if(l->val != r->val or l->children.size() != r->children.size()) return false;

    int n = l->children.size();
    for(int i=0; i<n; i++) {
        if(not _isSymmetric(l->children[i], r->children[n-1-i])) return false;
    }

    return true;
}

bool isSymmetric(TreeNode* root) {
    return _isSymmetric(root, root);
}

int main() {
    TreeNode* root = new TreeNode(4, {new TreeNode(3, {new TreeNode(9), new TreeNode(10)}), new TreeNode(5), new TreeNode(3,  {new TreeNode(9)})});

    cout << boolalpha << isSymmetric(root) << endl;
}