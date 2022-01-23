#include <iostream>

struct Node {
    int _key;
    Node* _next;
    Node(int key) : _key(key), _next(nullptr) {}
};

void print(Node* root){
    while(root){
        std::cout << root->_key << ' ';
        root = root->_next;
    }
}

Node* delete_the_last_kth_node_util(Node* node, int k, int& i){
    if(!node) return nullptr;

    Node* next = delete_the_last_kth_node_util(node->_next, k, i);
    ++i;

    if(i != k){
        node->_next = next;
        return node;
    }
    
    delete node;
    return next;
}

Node* delete_the_last_kth_node(Node* root, int k){
    int i = 0;
    return delete_the_last_kth_node_util(root, k, i);
}

int main(void) {
    Node* root = new Node(4);
    root->_next = new Node(-1);
    root->_next->_next = new Node(10);
    root->_next->_next->_next = new Node(19);
    root->_next->_next->_next->_next = new Node(-4);

    print(root);
    std::cout << std::endl;

    root = delete_the_last_kth_node(root, 5);

    print(root);
    std::cout << std::endl;
}