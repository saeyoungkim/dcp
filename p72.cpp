/**
 * @file p72.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-25
 * 
 * @copyright Copyright (c) 2021
 * 
 In a directed graph, each node is assigned an uppercase letter. We define a path's value as the number of most frequently-occurring letter along that path. For example, if a path in the graph goes through "ABACA", the value of the path is 3, since there are 3 occurrences of 'A' on the path.

Given a graph with n nodes and m directed edges, return the largest value path of the graph. If the largest value is infinite, then return null.

The graph is represented with a string and an edge list. The i-th character represents the uppercase letter of the i-th node. Each tuple in the edge list (i, j) means there is a directed edge from the i-th node to the j-th node. Self-edges are possible, as well as multi-edges.

For example, the following input graph:

ABACA
[(0, 1),
 (0, 2),
 (2, 3),
 (3, 4)]
Would have maximum value 3 using the path of vertices [0, 2, 3, 4], (A, A, C, A).

The following input graph:

A
[(0, 0)]
Should return null, since we have an infinite loop.
 */
#include <iostream>
#include <vector>
#include <list>
using namespace std;

string str;
vector<list<int>> adj_nodes;
int M;

int counts[26] = {0};
vector<bool> is_visiting;

int dfs(int s) {
    if(is_visiting[s]) {
        return -1;
    }

    bool is_end_node = true;

    is_visiting[s] = true;
    counts[(int)(str[s]-'A')]++;

    int ans = 0;

    for(auto adj : adj_nodes[s]) {
        is_end_node = false;
        int tmp = dfs(adj);
        if(tmp == -1) {
            return -1;
        }
        ans = max(ans, tmp);
    }

    if(is_end_node) {
        for(int i = 0; i < 26; i++) {
            ans = max(ans, counts[i]);
        }
    }

    counts[(int)(str[s]-'A')]--;
    is_visiting[s] = false;

    return ans;
}

int main() {
    cin >> str;
    adj_nodes.resize(str.length());
    is_visiting.resize(str.length());
    cin >> M;

    int from, to;
    for(int i = 0; i < M; i++) {
        cin >> from >> to;
        adj_nodes[from].push_back(to);
    }

    int ans = 0;
    for(int i = 0; i < str.length(); i++) {
        int tmp = dfs(i);
        if(tmp != -1) {
            ans = max(ans,tmp);
        } else {
            cout << "NULL" << endl;
            return 0;
        }
    }

    cout << ans << endl;
}