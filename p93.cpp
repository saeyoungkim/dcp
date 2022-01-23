/**
 * @file p93.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Apple.

Given a tree, find the largest tree/subtree that is a BST.

Given a tree, return the size of the largest tree/subtree that is a BST.
 */

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

// include root max Size BST
// 0 number 1 left range 2 right range
vector<int> maxSizeOfBST(Node* root, int &tmp) {
    if(!root) {
        return {0,INT_MAX,INT_MIN};
    }
    
    int ans = 1;
    vector<int> l = maxSizeOfBST(root->left, tmp);
    vector<int> r = maxSizeOfBST(root->right, tmp);
    vector<int> ret(3,0);
    if(root->val > l[2] and root->val < r[1]) {
        ans += l[0] + r[0];
        ret[0] = ans;
        ret[1] = min(l[1], root->val);
        ret[2] = max(root->val, r[2]);
    } else {
        ret[0] = 1;
        ret[1] = root->val;
        ret[2] = root->val;
    }

    tmp = max(tmp,ret[0]);

    return ret;
}

int main() {
    Node* root = new Node(2, new Node(5, new Node(1), new Node(7)), new Node(9, new Node(11), new Node(20)));

    int tmp = 0;
    maxSizeOfBST(root, tmp);

    cout << tmp << endl;
}