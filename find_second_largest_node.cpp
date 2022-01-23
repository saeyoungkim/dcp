#include <iostream>

struct Node {
    int _val;
    Node* _left;
    Node* _right;
    Node(int val) : _val(val), _left(nullptr), _right(nullptr) {}
};

class BinarySearchTree {
public:
    Node* _root;

    BinarySearchTree() : _root(nullptr) {}
    
    Node* findTheSecondLargestNode() {
        return findTheSecondLargestNodeUtil(_root);
    }
private:
    Node* theRightestNode(Node* curr){
        while(curr->_right){
            curr = curr->_right;
        }
        return curr;
    }

    Node* findTheSecondLargestNodeUtil(Node* root){
        // 一番右側までいく（一番大きい値）
        Node* parentNode = nullptr;
        Node* theLargestNode = root;
        
        while(theLargestNode->_right){
            parentNode = theLargestNode;
            theLargestNode = theLargestNode->_right;
        }

        // 左子があれば、左子から一番右が正解
        if(theLargestNode->_left) return theRightestNode(theLargestNode->_left); 

        // 左子がなければ、親が正解
        return parentNode;
    }
};

int main(void){
    BinarySearchTree* bst = new BinarySearchTree();
    bst->_root = new Node(74);
    bst->_root->_left = new Node(32);
    // bst->_root->_left->_left = new Node(3);
    // bst->_root->_left->_right = new Node(41);
    // bst->_root->_right = new Node(111);
    // bst->_root->_right->_left = new Node(85);
    // bst->_root->_right->_right = new Node(152);

    std::cout << bst->findTheSecondLargestNode()->_val << std::endl;
}