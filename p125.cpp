#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int _v): val(_v) {};
    Node(int _v, Node* _l, Node* _r) : val(_v) , left(_l) , right(_r) {};
};

unordered_map<int, Node*> um;
pair<Node*,Node*> ans;

void dfs(Node* r, int K) {
    if(not r) {
        return ;
    }

    if(ans.first) {
        return ;
    }

    if(um.count(K - r->val)) {
        ans = make_pair(r, um[K-r->val]);
        return ;
    }

    um[r->val] = r;

    dfs(r->left, K);
    dfs(r->right, K);
}

int main() {
    Node* r = new Node(10, new Node(5), new Node(15, new Node(11), new Node(15)));

    int K = 20;

    dfs(r, K);
    
    if(ans.first) {
        cout<< ans.first->val << " " << ans.second->val << endl;
    } else {
        cout << "No value" << endl;
    }
}