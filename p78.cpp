/**
 * @file p78.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-31
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Google.

Given k sorted singly linked lists, write a function to merge all the lists into one sorted singly linked list.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto compare = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };
        
        priority_queue<ListNode*, vector<ListNode*>, decltype(compare)> q{compare};
        
        for(auto list : lists) {
            ListNode* n = list;
            while(n) {
                q.push(n);
                n = n->next;
            }
        }
        
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        while(!q.empty()) {
            ListNode* tmp = q.top();
            q.pop();
            curr->next = tmp;
            curr = tmp;
        }
        curr->next = nullptr;
        
        return dummy->next;
    }
};