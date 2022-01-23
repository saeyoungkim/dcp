#include <iostream>

struct Node {
    int item;
    Node* both;
    Node(int val) : item(val), both(nullptr) {}
};

struct XORLinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;

    void add(int val){
        if(head == nullptr) {
            head = tail = new Node(val);
        }
        else {
            tail->both = new Node(val);
            tail = tail->both;
        }
    }

    void Xorfy(){
        Node* curr = head;
        if(!curr) return ;

        Node* prev = nullptr;
        Node* next = curr->both;
        while(curr != nullptr) {
            long prevAddr = reinterpret_cast<unsigned long>(prev == nullptr ? 0 : prev);
            long nextAddr = reinterpret_cast<unsigned long>(next == nullptr ? 0 : next);

            std::cout << prev << " " << curr << " " << next << std::endl;
            std::cout << prevAddr << " " << nextAddr << std::endl;

            curr->both = reinterpret_cast<Node*>(prevAddr ^ nextAddr);
            prev = curr;
            curr = next;

            next = curr == nullptr ? nullptr : curr->both;
        }
    }

    void addElements(int value) {

        Node* node = new Node(value);

        if(head == nullptr) {
            head = node;
            return ;
        }

        Node* even = head;
        Node* odd = head->both;

        int curr = 0;

        while(even && odd){

            long oddAddr = reinterpret_cast<unsigned long>(odd == nullptr ? 0 : odd);
            long evenAddr = reinterpret_cast<unsigned long>(even == nullptr ? 0 : even);

            evenAddr = reinterpret_cast<unsigned long>(odd->both) ^ evenAddr;
            oddAddr = reinterpret_cast<unsigned long>(even->both) ^ oddAddr;

            if(curr % 2 == 0) even = reinterpret_cast<Node*>(evenAddr);
            else odd = reinterpret_cast<Node*>(oddAddr);

            ++curr;
        }

        if(even) {
            even->both = reinterpret_cast<Node*>(reinterpret_cast<unsigned long>(even->both == nullptr ? 0 : even->both) ^ reinterpret_cast<unsigned long>(node));
            node->both = even;
        }
        else {
            odd->both = reinterpret_cast<Node*>(reinterpret_cast<unsigned long>(odd->both == nullptr ? 0 : odd->both) ^ reinterpret_cast<unsigned long>(node));
            node->both = odd;
        }
    }

    Node* get(int idx) {
        // head --> 0
        // even 0 --> 1
        // odd 1 --> 0 ^ 2
        // even 2 --> 1 ^ 3
        // 3 --> 2 ^ 4
        // 4 --> 5

        // even --> 0
        // odd --> 1
        // even = odd->both ^ even --> 2

        if(head == nullptr) return nullptr;

        Node* even = head;
        Node* odd = head->both;

        if(idx == 0) return even;
        else if(idx == 1) return odd;

        bool isEvenIndex = idx % 2 == 0;
        int curr = 2;

        while(curr <= idx){

            long oddAddr = reinterpret_cast<unsigned long>(odd == nullptr ? 0 : odd);
            long evenAddr = reinterpret_cast<unsigned long>(even == nullptr ? 0 : even);

            evenAddr = reinterpret_cast<unsigned long>(odd->both) ^ evenAddr;
            oddAddr = reinterpret_cast<unsigned long>(even->both) ^ oddAddr;

            if(curr % 2 == 0) even = reinterpret_cast<Node*>(evenAddr);
            else odd = reinterpret_cast<Node*>(oddAddr);

            ++curr;
        }

        Node* ret = isEvenIndex == true ? even : odd;
        return ret;
    }
};

int main(void) {
    XORLinkedList xorLinkedList;
    
    xorLinkedList.addElements(0);
    xorLinkedList.addElements(1);
    xorLinkedList.addElements(2);

    std::cout << xorLinkedList.get(2)->item << std::endl;
}
