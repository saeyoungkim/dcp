#include <iostream>

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int _v) : val(_v), left(NULL), right(NULL) {}
    Node() : val(0), left(NULL), right(NULL) {}
};

struct Result {
    int count;
    bool is_unival;
};

Result solve(Node* root) {
    if(!root) {
        return {0, true};
    }

    Node* left = root->left;
    Node* right = root->right;

    if(!left && !right) {
        return {1, true};
    }

    Result res_of_left = solve(root->left);
    Result res_of_right = solve(root->right);

    if(!left) {
        if (res_of_right.is_unival && root->val == right->val) {
            return {res_of_right.count+1, true};
        }

        return {res_of_right.count, false};

    } else if(!right) {
        if (res_of_left.is_unival && root->val == left->val) {
            return {res_of_left.count+1, true};
        }

        return {res_of_left.count, false};
    } 

    if (res_of_left.is_unival && res_of_right.is_unival && root->val == left->val && root->val == right->val) {
        return {res_of_left.count+res_of_right.count+1, true};
    }

    return {res_of_left.count+res_of_right.count, false};
}

void deleteNode(Node* node) {
    if(node) {
        deleteNode(node->left);
        deleteNode(node->right);

        delete(node);
    }
}

int main(void) {
    Node* root = new Node(1);
    root->left= new Node(1);
    root->right= new Node(1);
    root->right->left = new Node(1);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(1);
    root->right->right = new Node(1);

    std::cout << std::boolalpha << solve(root).count << " " << solve(root).is_unival << std::endl;
    delete(root);
}