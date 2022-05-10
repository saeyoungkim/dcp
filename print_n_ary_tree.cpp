/**
 * @file print_n_ary_tree.cpp
 * @version 0.1
 * @date 2022-05-10
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a n-ary tree, print the nodes in the required format.
Follow-up: given the printed string, make the tree and return the root.

Example:
		   1
   /       |       \
  2        3        4 
  |       /  \      |
  5      6    7     8
              |
			  9
print the output in this format (append a dash "-" to each node value and keep adding dashes for each level)
-1
--2
---5
--3
---6
---7
----9
--4
 */

#include <iostream>
#include <vector>
#include <sstream>
#include <istream>
#include <stack>

using namespace std;

struct NArrayNode {
    NArrayNode(int _v = 0, vector<NArrayNode*> _nexts = {}) : v(_v), nexts(_nexts) {};

    int v;
    vector<NArrayNode*> nexts;
};

void print(NArrayNode* root, int level = 1) {
    if(root) {
        string dashes = string(level, '-');
        cout << dashes << root->v << endl;

        for(auto node : root->nexts) {
            print(node, level+1);
        }
    }
}

vector<string> split(const string& str, char del) {
    int first = 0;
    int last = str.find_first_of(del);
    vector<string> result;

    while (first < str.size()) {
        result.push_back(str.substr(first, last - first));
        first = last + 1;
        last = str.find_first_of(del, first);
        if (last == string::npos) last = str.size();
    }
    return result;
}

NArrayNode* generateNode(const string& printed) {
    vector<string> splitted = split(printed, '\n');

    if(splitted.empty())
        return nullptr;

    NArrayNode tmp = NArrayNode();

    stack<pair<NArrayNode*,int>> stk;

    stk.push(make_pair(&tmp, 0));

    for(const string& row : splitted) {
        int level = 0;
        int idx = 0;
        while(idx < row.length() and row[idx] == '-') {
            idx++;
            level++;
        }

        int v = stoi(row.substr(idx));

        NArrayNode* curr = new NArrayNode(v);

        while(!stk.empty() && stk.top().second >= level) {
            stk.pop();
        }

        stk.top().first->nexts.push_back(curr);

        stk.push(make_pair(curr,level));
    }
    return tmp.nexts.front();
}

int main() {
    string printed = "-1\n--2\n---5\n--3\n---6\n---7\n----9\n--4\n---8";

    NArrayNode* root2 = generateNode(printed);

    print(root2);
}