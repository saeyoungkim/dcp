/**
 * @file p141.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Implement 3 stacks using a single list:
 */
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next = nullptr;
    ListNode* prev = nullptr;
    ListNode* prev_same_stk_node = nullptr;
    ListNode* next_same_stk_node = nullptr;

    ListNode(int _v) : val(_v), next(nullptr), prev_same_stk_node(nullptr), next_same_stk_node(nullptr) {};
};

class Stacks {
private:
    ListNode* tail = nullptr;
    
    ListNode* last_node[3] = {nullptr, nullptr, nullptr};

    ListNode* dummy = new ListNode(-1);
public:
    Stacks() {}

    void push(int item, int stk_number) {
        cout << "push " << item << " in number of stack " << stk_number << endl; 
        if(tail == nullptr) {
            tail = new ListNode(item);
            dummy->next = tail;
            tail->prev = dummy->next;
        } else {
            tail->next = new ListNode(item);
            tail->next->prev = tail;
            tail = tail->next;
            if(last_node[stk_number]) {
                last_node[stk_number]->next_same_stk_node = tail;
                tail->prev_same_stk_node = last_node[stk_number];
            }
        }

        last_node[stk_number] = tail;
    }

    int pop(int stk_number) {
        if(tail == nullptr or last_node[stk_number] == nullptr) {
            cout << "cannnot pop the value at " << stk_number << endl;
            exit(1); 
        }

        // same stk op
        ListNode* t = last_node[stk_number];

        last_node[stk_number] = t->prev_same_stk_node;
        t->prev_same_stk_node = nullptr;
        if(last_node[stk_number]) last_node[stk_number]->next_same_stk_node = nullptr;

        // tail op
        if(t->prev) t->prev->next = t->next;
        t->prev = nullptr;
        if(t->next) t->next->prev = t->prev;
        t->next = nullptr;

        int ret = t->val;

        delete(t);

        return ret;
    }
};

int main() {
    Stacks stks = Stacks();
    stks.push(5,0);
    stks.push(4,1);
    stks.push(3,2);
    stks.push(10,0);

    cout << stks.pop(2) << endl;
    cout << stks.pop(0) << endl;
    cout << stks.pop(1) << endl;
    cout << stks.pop(0) << endl;
}