#include <iostream>
#include <vector>

struct Node {
    char key;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(char c) : key(c), left(nullptr), right(nullptr) {};
};

Node* makeTree(const std::string& pre_order, const std::string& in_order){
    if(!pre_order.length()) return nullptr;
    
    char root_key = pre_order.front();

    Node* root = new Node(root_key);

    int pos = in_order.find(root_key);

    root->left = makeTree(pre_order.substr(1, pos), in_order.substr(0, pos));
    root->right = makeTree(pre_order.substr(pos+1), in_order.substr(pos+1));

    return root;
}

void print(std::string interval, Node* node) {
    if(!node) return ;
    std::cout << interval + "-" << node->key << std::endl;
    print(interval + "-", node->left);
    print(interval + "-", node->right);
}

void printRoot(std::string interval, Node* node) {
    if(!node) return ;
    std::cout << node->key << std::endl;
    print("|", node->left);
    print("|", node->right);
}

int main(void) {
    std::string pre_order = "abdecfg";
    std::string in_order = "dbeafcg";

    Node* root = makeTree(pre_order, in_order);

    printRoot("", root);
}