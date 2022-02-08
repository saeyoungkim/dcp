#include <iostream>
#include "./Node.hpp"
#include <vector>

using namespace std;

int get_min_level(Node* r) {
    if(not r) {
        return 0;
    }

    vector<Node*> curr;
    curr.push_back(r);

    int min_level = 0;
    int min_sum = INT_MAX;

    int curr_level = 1;

    while(not curr.empty()) {
        vector<Node*> next;
        int curr_sum = 0;

        for(Node* n : curr) {
            curr_sum += n->val;
            if(n->left) next.push_back(n->left);
            if(n->right) next.push_back(n->right);
        }

        if(curr_sum < min_sum) {
            min_sum = curr_sum;
            min_level = curr_level;
        }

        curr = next;
        curr_level++;
    }
    
    return min_level;
}

int main() {
    Node* r1 = new Node(100, new Node(10, new Node(20), new Node(30, nullptr, new Node(10))), new Node(5));

    cout << get_min_level(r1) << endl;

    r1->left->val = 200;

    cout << get_min_level(r1) << endl;

    r1->left->right->val = 1000;

    cout << get_min_level(r1) << endl;

    r1->left->right->right->val = 100000;

    cout << get_min_level(r1) << endl;
}