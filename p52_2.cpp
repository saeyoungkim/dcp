#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    string key;
    string val;
    Node* prev;
    Node* next;

    Node(): val(""), prev(nullptr), next(nullptr) {};
    Node(string k, string v): key(k), val(v), prev(nullptr), next(nullptr) {};
};

struct List {
private:
    Node* dummy;
public:
    Node* head;
    Node* tail;
    List() : dummy(new Node()), head(nullptr), tail(nullptr) {
    };

    void add(Node* n) {
        if(tail) {
            tail->next = n;
            n->prev = tail;
            tail = n;
        } else {
            dummy->next = n;
            n->prev = dummy;
            head = n;
            tail = n;
        }
    }

    void remove(Node* n) {
        if(!n) {
            return ;
        }

        n->prev->next = n->next;
        if(n->next) {
            n->next->prev = n->prev;
        }
        
    }

    void pop() {
        if(!head) return ;
        
        head->prev->next = head->next;
        if(head->next) {
            head->next->prev = head->prev;
        }
    }
};

class LRU {
private:
    int _curr;
    int _size;
    List l;
    unordered_map<string, Node*> memo;
public:
    LRU(int s) : _curr(0), _size(s), l(List()) {};

    void set(string key, string value) {
        if(this->_curr < this->_size) {
            if(memo.count(key) > 0) {
                this->memo[key]->val = value;

                return ;
            } else {
                this->_curr++;
            }
        } else {
            Node* deleted = l.head;
            l.pop();
            this->memo.erase(deleted->key);

            delete deleted;
        }
        
        Node* n = new Node(key, value);
        this->memo[key] = n;
        l.add(n);
    }

    string get(string key) {
        if(this->memo.count(key)) {
            Node* n = this->memo[key];
            l.remove(n);
            l.add(n);
            return this->memo[key]->val;
        }

        return "NO";
    }
};

int main(void) {
    LRU cache = LRU(3);
    cache.set("1", "hello1");
    cache.set("2", "hello2");
    cache.set("3", "hello3");

    cout << cache.get("1") << endl;
    cout << cache.get("2") << endl;

    cache.set("4", "hello4");

    cout << cache.get("1") << endl;
    cout << cache.get("2") << endl;
    cout << cache.get("3") << endl;
    cout << cache.get("4") << endl;
}