/**
 * @file p67.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Google.

Implement an LFU (Least Frequently Used) cache. It should be able to be initialized with a cache size n, and contain the following methods:

set(key, value): sets key to value. If there are already n items in the cache and we are adding a new item, then it should also remove the least frequently used item. If there is a tie, then the least recently used key should be removed.
get(key): gets the value at key. If no such key exists, return null.
Each operation should run in O(1) time.
 */

// memo the last Node of count i

#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Node {
    string value;
    int count;
    Node* next = nullptr;
    Node* prev = nullptr;

    Node(string v, int c) : value(v), count(c) {};

    void deleteNode() {
        Node* p = prev;
        Node* n = next;
        p->next = n;
        n->prev = p;
    }

    void appendAfter(Node* p) {
        Node* n = p ->next;
        p->next = this;
        this->next = n;
        if(n) {
            n->prev = this;
        }
        this->prev = p;
    }
};

class LFU {
    unordered_map<string, Node*> um;
    int curr = 0;
    int size = 0;
    Node* dummy = new Node("", 0);
    unordered_map<int, Node*> last_node_in_count{{0, dummy}};
public:
    LFU(int n) : size(n) {};

    string get(string key) {
        if(um.count(key)) {
            Node* curr = um[key];
            cout << "get method : " << curr->value << endl;

            Node* curr_last = last_node_in_count[curr->count];
            Node* next_last = last_node_in_count[curr->count+1];
            cout << curr << endl;
            cout << curr_last << endl;
            cout << next_last << endl;
            if(next_last) {
                if(curr_last == curr) {
                    last_node_in_count[curr->prev->count] = curr->prev;
                }
                curr->deleteNode();
                curr->appendAfter(next_last);
            } else {
                if(curr_last == curr) {
                    last_node_in_count[curr->prev->count] = curr->prev;
                } else {
                    curr->deleteNode();
                    curr->appendAfter(curr_last);
                }
            }
            last_node_in_count[++(curr->count)] = curr;
            cout << "get method : " << curr->value  << " " << curr->count << endl;

            return curr->value;
        }

        return "";
    }

    void set(string key, string value) {
        um[key] = new Node(value, 0);
        um[key]->appendAfter(last_node_in_count[0]);
        last_node_in_count[0] = um[key];
        curr++;

        if(curr > size && dummy->next) {
            Node* deletedNode = dummy->next;
            if(deletedNode == last_node_in_count[0]) {
                last_node_in_count[deletedNode->prev->count] = deletedNode->prev;
            }
            deletedNode->deleteNode();
            curr--;
        }
    }
};

int main() {
    LFU cache(3);
    cache.set("english", "hello");
    cache.set("japanese", "こんにちは");
    cache.set("korean", "안녕하세요");
    cout << cache.get("japanese") << endl;
    cout << cache.get("japanese") << endl;
    cout << cache.get("korean") << endl;
    cout << cache.get("korean") << endl;
    cout << cache.get("korean") << endl;
    cout << cache.get("english") << endl;
    cache.set("french", "Bonjuir");
    cout << cache.get("english") << endl;
    cout << cache.get("french") << endl;
}