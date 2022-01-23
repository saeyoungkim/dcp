#include <iostream>
#include <vector>
#include <unordered_map>

/**
 * @file p24.cpp
 * @author saeyoung kim
 * @brief 
 * @version 0.1
 * @date 2021-11-07
 * 
 * @copyright Copyright (c) 2021
 * 
 * Implement locking in a binary tree. A binary tree node can be locked or unlocked only if all of its descendants or ancestors are not locked.

Design a binary tree node class with the following methods:

is_locked, which returns whether the node is locked
lock, which attempts to lock the node. If it cannot be locked, then it should return false. Otherwise, it should lock it and return true.
unlock, which unlocks the node. If it cannot be unlocked, then it should return false. Otherwise, it should unlock it and return true.
You may augment the node to add parent pointers or any other property you would like. You may assume the class is used in a single-threaded program, so there is no need for actual locks or mutexes. Each method should run in O(h), where h is the height of the tree.
 */

struct Node { 
    Node* left;
    Node* right;

    Node() : left(NULL), right(NULL) {};
};

class Tree {
private:
    Node* head;
    std::unordered_map<Node*, bool> _is_locked;
    std::unordered_map<Node*, std::pair<Node*, int> > ancestor_and_locked_decscendants_count;

public:
    Tree(const std::vector<Node*>& v) {
        
        for(int i = 0; i < v.size(); i++) {
            int left = (i << 1) + 1;
            int right = (i << 1) + 2;
            if(left < v.size()) {
                v[i]->left = v[left];
                ancestor_and_locked_decscendants_count[v[left]] = std::make_pair(v[i], 0);
            }
            if(right < v.size()) {
                v[i]->right = v[right];
                ancestor_and_locked_decscendants_count[v[right]] = std::make_pair(v[i], 0);
            }
            _is_locked[v[i]] = false;
        }

        this->head = v.front();
        ancestor_and_locked_decscendants_count[this->head] = std::make_pair(nullptr, 0);
    };

    bool is_locked(Node* target) {
        if(_is_locked.count(target) == 0) {
            std::cout << "Target does not exists..." << std::endl;
            std::exit(1);
        }
        return _is_locked[target];
    }

    bool lock(Node* target) {
        if(is_locked(target)) {
            return false;
        }

        _is_locked[target] = true;

        Node* curr = ancestor_and_locked_decscendants_count[target].first;

        while(curr) {
            ancestor_and_locked_decscendants_count[curr].second += 1;
            curr = ancestor_and_locked_decscendants_count[curr].first;
        }

        return _is_locked[target];
    }

    bool unlock(Node* target) {
        if(!is_locked(target)) {
            return false;
        }

        if(has_locked_ancestors(target) && has_locked_descendants(target)){
            return false;
        }

        _is_locked[target] = false;
        return true;
    }

private:
    bool has_locked_ancestors(Node* target) {
        target = ancestor_and_locked_decscendants_count[target].first;
        
        while(target) {
            if(is_locked(target)) {
                return true;
            }
            target = ancestor_and_locked_decscendants_count[target].first;
        }

        return false;
    }

    bool has_locked_descendants(Node* target) {
        return ancestor_and_locked_decscendants_count[target].second > 0;
    }
};

int main(void) {
    std::vector<Node*> arr;
    for(int i = 0; i < (1 << 5); i++) {
        arr.push_back(new Node());
    }

    Tree t = Tree(arr);

    std::cout << std::boolalpha << t.is_locked(arr[0]) << std::endl;
    std::cout << std::boolalpha << t.is_locked(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.lock(arr[0]) << std::endl;
    std::cout << std::boolalpha << t.is_locked(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.is_locked(arr[0]) << std::endl;
    std::cout << std::boolalpha << t.lock(arr[0]) << std::endl;

    std::cout << std::boolalpha << t.is_locked(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.lock(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.is_locked(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.unlock(arr[0]) << std::endl;
    std::cout << std::boolalpha << t.unlock(arr[1]) << std::endl;
    std::cout << std::boolalpha << t.unlock(arr[1]) << std::endl;
}