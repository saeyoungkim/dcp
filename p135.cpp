/**
 * @file p135.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * This question was asked by Apple.

Given a binary tree, find a minimum path sum from root to a leaf.

For example, the minimum path in this tree is [10, 5, 1, -1], which has sum 15.

  10
 /  \
5    5
 \     \
   2    1
       /
     -1
 */

#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node* _l, Node* _r) : val(_v), left(_l), right(_r) {};
};

void minSumFromRoot(Node* root, int sum, int& m, vector<int>& path, vector<int>& ans) {
    if(not root) {
        return ;
    }

    sum += root->val;
    path.push_back(root->val);

    if(not root->left and not root->right) {
        m = min(m, sum);
        ans = path;
    }

    minSumFromRoot(root->left, sum, m, path, ans);
    minSumFromRoot(root->right, sum, m, path, ans);

    path.pop_back();
}

int main() {
    Node* root = new Node(10, new Node(5, nullptr, new Node(2)), new Node(5, nullptr, new Node(1, new Node(-1), nullptr)));

    int m = INT_MAX;

    vector<int> tmp;
    vector<int> ans;

    minSumFromRoot(root, 0, m, tmp, ans);

    for_each(ans.begin(), ans.end(), [](const int n) {
        cout << n << " ";
    });
    cout << endl;
}