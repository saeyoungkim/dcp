/**
 * @file p215.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Yelp.

The horizontal distance of a binary tree node describes how far left or right the node will be when the tree is printed out.

More rigorously, we can define it as follows:

The horizontal distance of the root is 0.
The horizontal distance of a left child is hd(parent) - 1.
The horizontal distance of a right child is hd(parent) + 1.
For example, for the following tree, hd(1) = -2, and hd(6) = 0.

             5
          /     \
        3         7
      /  \      /   \
    1     4    6     9
   /                /
  0                8
The bottom view of a tree, then, consists of the lowest node at each horizontal distance. If there are two nodes at the same depth and horizontal distance, either is acceptable.

For this tree, for example, the bottom view could be [0, 1, 3, 6, 8, 9].

Given the root to a binary tree, return its bottom view.
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode {
    int val = 0;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;

    TreeNode(int _v = 0, TreeNode* _l = nullptr, TreeNode* _r = nullptr) : val(_v), left(_l), right(_r) {};
};

struct NodeInfo {
    int val = 0;
    int height = 0;

    NodeInfo(int _v, int _h) : val(_v), height(_h) {};
    NodeInfo() {};
};

map<int, NodeInfo> memo;

void dfs(TreeNode* r, int curr, int h) {
    if(not r)
        return ;
    else if(!memo.count(curr) or memo[curr].height <= h)
        memo[curr] = NodeInfo(r->val, h);

    dfs(r->left, curr-1, h+1);
    dfs(r->right, curr+1, h+1);
}

int main() {
    TreeNode* root = new TreeNode(5, new TreeNode(3, new TreeNode(1, new TreeNode(0)) , new TreeNode(4)), new TreeNode(7, new TreeNode(6), new TreeNode(9, new TreeNode(8))));

    dfs(root, 0, 0);

    vector<int> ans;

    for(const auto& p : memo) {
        ans.push_back(p.second.val);
    }

    for_each(ans.begin(), ans.end(), [](const int& v) {
        cout << v << " ";
    });

    cout << endl;
}