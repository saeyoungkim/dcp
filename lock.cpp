#include <iostream>

struct Node {
    Node* left;
    Node* right;
    Node* parent;
    bool is_locked;
    int locked_descendants;

    Node() : left(nullptr), right(nullptr), parent(nullptr), is_locked(false), locked_descendants(0) {}
};

bool is_locked(Node* ptr){
    return ptr->is_locked;
}

bool is_ancestors_unlocked(Node* curr){
    curr = curr->parent;
    while(curr != nullptr){
        if(is_locked(curr)) return false;
        curr = curr->parent;
    }
    return true;
}

bool is_descendants_unlocked_util(Node* curr){
    if(!curr) return true;

    if(is_locked(curr)) return false;

    return is_descendants_unlocked_util(curr->left) && is_descendants_unlocked_util(curr->right);
}


bool is_descendants_unlocked(Node* curr){
    if(!curr) return true;

    return is_descendants_unlocked_util(curr->left) && is_descendants_unlocked_util(curr->right);
}

void update_parents_lock(Node* ptr){
    ptr = ptr->parent;
    while(ptr != nullptr){
        ++ptr->locked_descendants;
        ptr = ptr->parent;
    }
}

void update_parents_unlock(Node* ptr){
    ptr = ptr->parent;
    while(ptr != nullptr){
        --ptr->locked_descendants;
        ptr = ptr->parent;
    }
}

bool lock(Node* ptr){
    if(is_locked(ptr)) return false;

    if(is_ancestors_unlocked(ptr) && ptr->locked_descendants == 0){
        update_parents_lock(ptr);
        ptr->is_locked = true;
        return true;
    }
    else return false;
}

bool unlock(Node* ptr){
    if(!is_locked(ptr)) return false;

    if(is_ancestors_unlocked(ptr) && ptr->locked_descendants == 0){
        update_parents_unlock(ptr);
        ptr->is_locked = false;
        return true;
    }
    else return false;
}

int main(void) {
    Node* root = new Node();
    root->left = new Node();
    root->left->parent = root;
    root->right = new Node();
    root->right->parent = root;
    root->left->left = new Node();
    root->left->left->parent = root->left;
    root->left->right = new Node();
    root->left->right->parent = root->left;
    root->right->right = new Node();
    root->right->right->parent = root->right;

    std::cout << std::boolalpha << lock(root->left->left) << std::endl;
    std::cout << std::boolalpha << unlock(root->left->left) << std::endl;
    std::cout << std::boolalpha << lock(root->left) << std::endl;
    std::cout << std::boolalpha << lock(root->left->left) << std::endl;
    std::cout << std::boolalpha << lock(root) << std::endl;
    std::cout << std::boolalpha << lock(root->right) << std::endl;
}