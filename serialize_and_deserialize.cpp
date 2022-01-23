#include <string>
#include <iostream>
#include <unordered_map>

#define DELIM ' '
#define NOTHING "-1"

struct Node {
    std::string _val;
    Node* _left = nullptr;
    Node* _right = nullptr;
    Node() = default;
    Node(const std::string& val) : _val(val), _left(nullptr), _right(nullptr) {}
    Node(const std::string& val, Node* left, Node* right) : _val(val), _left(left), _right(right) {}
};

std::string serialize(Node* node) {
    return node == nullptr ? NOTHING : node->_val + " " + serialize(node->_left) + " " + serialize(node->_right); 
}

Node* deserialize(std::string& str) {
    auto pos = str.find(DELIM);
    if(pos == std::string::npos) return nullptr;
    
    std::string data = str.substr(0, pos);
    str = str.substr(pos+1);

    if(data == "-1") return nullptr;

    Node* node = new Node();
    node->_val = data;

    node->_left = deserialize(str);
    node->_right = deserialize(str);

    return node;
}

int main(void) {
    Node* root = new Node("root" , new Node("left", new Node("left.left"), nullptr) , new Node("right"));

    std::string str = serialize(root);

    std::cout << str << std::endl;

    std::cout << serialize(deserialize(str)) << std::endl;
}