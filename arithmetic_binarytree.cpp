#include <iostream>
#include <string>
#include <stdexcept>

struct Node {
    std::string val;
    struct Node* left;
    struct Node* right;
    Node() : left(nullptr), right(nullptr) {}
    Node(std::string v) : val(v), left(nullptr), right(nullptr) {}
};


bool isOperation(const std::string& op)
{
    return op == "*" || op == "+" || op == "/" || op == "-";
}

int calculate(int number1, int number2, const std::string& op) {
    if(!isOperation(op)) throw std::logic_error("operationではない");
    
    switch(op.front()) {
        case '*' :
            return number1 * number2;
        case '/' :
            return number1 / number2;
        case '-' :
            return number1 - number2;
        case '+' :
            return number1 + number2;
        default :
            throw std::runtime_error("不正確なformatである");
    }
}

bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

int calculateBinaryTree(Node* node) {
    if(node == nullptr) throw std::logic_error("nullptrが代入されることはできません");

    if(!node->left && !node->right) {
        if(is_number(node->val)) return std::stoi(node->val);
        else throw std::logic_error("記号ではなく数字が来るところです");
    }

    int left = calculateBinaryTree(node->left);
    int right = calculateBinaryTree(node->right);

    return calculate(left, right, node->val);
}

int main(void) {
    Node* root = new Node("*");
    root->left = new Node("+");
    root->right = new Node("+");
    root->left->left = new Node("3");
    root->left->right = new Node("2");
    root->right->left = new Node("4");
    root->right->right = new Node("5");

    try {
        std::cout << calculateBinaryTree(root) << std::endl;
    } catch (std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}