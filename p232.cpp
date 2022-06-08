/**
 * @file p232.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Google.

Implement a PrefixMapSum class with the following methods:

insert(key: str, value: int): Set a given key's value in the map. If the key already exists, overwrite the value.
sum(prefix: str): Return the sum of all values of keys that begin with a given prefix.
For example, you should be able to run the following code:

mapsum.insert("columnar", 3)
assert mapsum.sum("col") == 3

mapsum.insert("column", 2)
assert mapsum.sum("col") == 5
 */

#include <iostream>
#include <unordered_map>

using namespace std;

struct TrieNode {
    int sum = 0;
    TrieNode* next[26] = {nullptr};

    TrieNode(int _s = 0) : sum(_s) {
        for(int i=0; i<26; i++) next[i] = nullptr;
    }

    void insert(const string& str, int val, int idx = 0) {
        if(idx > 0) this->sum += val;

        if(idx == str.length()) return ;

        int i = str[idx]-'a';
        if(not next[i]) next[i] = new TrieNode();

        next[i]->insert(str, val, idx+1);
    }

    int _sum(const string& prefix, int idx = 0) {
        if(idx == prefix.length()) {
            return this->sum;
        }

        int prefixIdx = prefix[idx]-'a';
        if(not next[prefixIdx]) return 0;

        return next[prefixIdx]->_sum(prefix, idx+1);
    }
};

class PrefixMap {
private:
    unordered_map<string, int> memo;
    TrieNode* root = new TrieNode();

public:
    void insert(string key, int val) {
        int diff = val - memo[key];
        memo[key] += diff;

        root->insert(key, diff);
    }

    int sum(string prefix) {
        return root->_sum(prefix);
    }
};

int main() {
    PrefixMap prefixMap = PrefixMap();

    prefixMap.insert("columnar", 3);
    cout << prefixMap.sum("col") << endl;

    prefixMap.insert("column", 2);
    cout << prefixMap.sum("col") << endl;

    prefixMap.insert("column", 10);
    cout << prefixMap.sum("col") << endl;

    cout << prefixMap.sum("columnar") << endl;
}