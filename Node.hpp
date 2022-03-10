#include <iostream>

struct Node {
    int val;
    Node *left, *right;
    
    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node *l, Node *r) : val(_v), left(l), right(r) {};
};

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int _v) : val(_v), next(nullptr) {};
    ListNode(int _v, ListNode* _n) : val(_v), next(_n) {};
};

void printBT(const std::string& prefix, const Node* node, bool isLeft)
{
    if( node != nullptr )
    {
        std::cout << prefix;

        std::cout << (isLeft ? "├──" : "└──" );

        // print the value of the node
        std::cout << node->val << std::endl;

        // enter the next tree level - left and right branch
        printBT( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void printBT(const Node* node)
{
    printBT("", node, false);    
}