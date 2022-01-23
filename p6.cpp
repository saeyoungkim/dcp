#include <iostream>

struct XORNode {
    int val;
    XORNode* both;

    XORNode() {
        this->val = 0;
        this->both = NULL;
    }

    XORNode(int _v) {
        this->val = _v;
        this->both = NULL;
    }
};

// root->both = the address of next node (0x1523823 ^ 0 => 0x1523823)

void add(XORNode** ptr_root, int elem) {
    if(!*ptr_root) {
        *ptr_root = new XORNode(elem);
        return ;
    }

    XORNode* curr;
    XORNode* prev;
    curr = *ptr_root;
    prev = NULL;
    while(curr->both) {
        XORNode* tmp = curr;
        curr = reinterpret_cast<XORNode*>(reinterpret_cast<uintptr_t>(curr->both) ^ reinterpret_cast<uintptr_t>(prev));
        prev = tmp;
    }
    curr->both = reinterpret_cast<XORNode*>(reinterpret_cast<uintptr_t>(prev) ^ reinterpret_cast<uintptr_t>(new XORNode(elem)));

    return ;
}

XORNode* get(XORNode** ptr_root, int index) {
    if(!*ptr_root) {
        return NULL;
    }

    int i = 0;
    XORNode* curr;
    XORNode* prev;
    curr = *ptr_root;
    prev = NULL;
    while(i < index && curr->both) {
        XORNode* tmp = curr;
        uintptr_t addr = reinterpret_cast<uintptr_t>(curr->both) ^ reinterpret_cast<uintptr_t>(prev);
        curr = reinterpret_cast<XORNode*>(addr);
        prev = tmp;
        i++;
    }

    if(i < index) {
        return NULL;
    }

    return curr;
}

int main() {
    XORNode* root = NULL;
    add(&root, 1);
    add(&root, 6);
    add(&root, 20);

    std::cout << get(&root, 0) << std::endl;
    std::cout << get(&root, 1) << std::endl;
    std::cout << get(&root, 2) << std::endl;
    std::cout << get(&root, 3) << std::endl;
    std::cout << get(&root, 4) << std::endl;
}