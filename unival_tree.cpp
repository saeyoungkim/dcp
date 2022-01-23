#include <iostream>

struct Tree {
    int _val;
    Tree* _left;
    Tree* _right;
    Tree(int val) : _val(val), _left(nullptr), _right(nullptr) {}
};

int countUnivalTree(Tree* root) {

}

int countUnivalTreeUtil(int& ct, Tree* root){
    if(!root) return 0;

    if(root->_left && root->_right) {
        if(root->_val == root->_left->_val && root->_val == root->_right->_val){
            return (countUnivalTreeUtil(ct, root->_left) + 1)  
        }
    }
}

int main(void) {
    Tree* root = new Tree(0);
    root->_left = new Tree(1);
    root->_right = new Tree(0);
    root->_right->_left = new Tree(1);
    root->_right->_right = new Tree(0);
    root->_right->_left->_left = new Tree(1);
    root->_right->_left->_right = new Tree(1);
}