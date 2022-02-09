struct Node {
    int val;
    Node *left, *right;
    
    Node(int _v) : val(_v), left(nullptr), right(nullptr) {};
    Node(int _v, Node *l, Node *r) : val(_v), left(l), right(r) {};
};