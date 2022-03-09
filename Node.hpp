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