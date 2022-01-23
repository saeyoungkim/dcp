#include <iostream>
#include <string>
#include <queue>
#include <sstream>

/**
Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.
For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'
*/

// q1. is there any conditions to input value

// solve
// if we know the length of value and the input value for section devision, good!

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int _v) {
        this->val = _v;
        this->left = NULL;
        this->right = NULL;
    }

    Node(int _v, Node* _left, Node* _right) {
        this->val = _v;
        this->left = _left;
        this->right = _right;
    }
};

Node* deserialize(const std::string& s) {
    if (s == "") {
        return NULL;
    }

    int idx = 0;

    unsigned int len_center = 0, len_right = 0, len_left = 0;
    unsigned int r_idx = 0, l_idx = 0;

    while(s[idx] != 'c') {
        idx++;
    }

    len_center = std::stoi(s.substr(0, idx));
    idx++;
    l_idx = idx;

    while(s[idx] != 'l') {
        idx++;
    }

    len_left = std::stoi(s.substr(l_idx, idx - l_idx));
    idx++;
    r_idx = idx;

    while(s[idx] != 'r') {
        idx++;
    }

    len_right = std::stoi(s.substr(r_idx, idx - r_idx));
    idx++;

    Node* ret = new Node(0);
    ret->val = std::stoi(s.substr(idx, len_center));

    idx += len_center;
    ret->left = len_left == 0 ? NULL : deserialize(s.substr(idx, len_left));

    idx+= len_left;
    ret->right = len_right == 0 ? NULL : deserialize(s.substr(idx, len_right));

    return ret;
}

std::string serialize(Node* root) {
    if (!root) {
        return "";
    }

    std::stringstream ss;

    std::string left = serialize(root->left);
    std::string right = serialize(root->right);

    std::string cen_val = std::to_string(root->val);

    ss << cen_val.length() << "c" << left.length() << "l" << right.length() << "r" << root->val << left << right; 

    return ss.str();
}

int main() {
    Node rn = Node(153);
    Node rnl = Node(553);
    Node rnr = Node(-24);
    rn.left = &rnl;
    rn.right = &rnr;

    Node* root = deserialize(serialize(&rn));

    std::cout << root->val << std::endl;
    std::cout << root->left->val << std::endl;
    std::cout << root->right->val << std::endl;
}