/**
 * @file p52.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 This problem was asked by Google.

Implement an LRU (Least Recently Used) cache. It should be able to be initialized with a cache size n, and contain the following methods:

set(key, value): sets key to value. If there are already n items in the cache and we are adding a new item, then it should also remove the least recently used item.
get(key): gets the value at key. If no such key exists, return null.
Each operation should run in O(1) time.
 */

#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class LRU {
private:
    int _N;
    int _size;
    unordered_map<string, pair<string,int>> memory;
    unordered_map<int, unordered_set<string>> count_mapping;
public:
    LRU(int N) : _N(N), _size(0) {};
    void set(string key, string value) {
        if(this->_size < this->_N) {
            if(!this->memory.count(key)) {
                this->_size++;
            } 
        } else {
            int ct = 0;

            while(count_mapping[ct].empty()) {
                ct++;
            }

            unordered_set<string>* deleted_candidates = &count_mapping[ct];

            string deleted_key = *deleted_candidates->begin();

            deleted_candidates->erase(deleted_key);
            if(deleted_candidates->empty()){
                count_mapping.erase(ct);
            }
            this->memory.erase(deleted_key);
        }
        memory[key] = make_pair(value, 0);
        count_mapping[0].insert(key);
    }

    string get(string key) {
        if(this->memory.count(key) == 0) {
            return "NO";
        }

        pair<string,int> pair = this->memory[key];
        count_mapping[pair.second].erase(key);

        ++pair.second;
        count_mapping[pair.second].insert(key);
        this->memory[key] = pair;

        return pair.first;
    }
};

int main() {
    LRU lru(5);

    lru.set("a", "AAA");
    lru.set("b", "BBB");
    lru.set("c", "CCC");
    lru.set("d", "DDD");
    lru.set("e", "EEE");

    cout << lru.get("a") << endl;
    cout << lru.get("b") << endl;
    cout << lru.get("d") << endl;
    cout << lru.get("e") << endl;
    cout << lru.get("a") << endl;
    cout << lru.get("b") << endl;
    cout << lru.get("d") << endl;
    cout << lru.get("e") << endl;
    cout << lru.get("c") << endl; 

    lru.set("f", "FFF");

    cout << lru.get("f") << endl;
    cout << lru.get("c") << endl; 
}