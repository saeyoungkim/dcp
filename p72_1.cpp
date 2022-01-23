/**
 * @file p72_1.cpp
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

vector<int> is_visiting; // 0 not_visited 1 is_visiting 2 is_visited
vector<vector<int>> dp;

bool dfs(int s) {
    if(is_visiting[s] == 1) {
        return true;
    }
    if(is_visiting[s] == 2) {
        return false;
    }

    is_visiting[s] = 1;

    for(auto adj : adj_nodes[s]) {
        if(dfs(adj)) {
            return true;
        }
    }

    for(auto adj : adj_nodes[s]) {
        for(int i = 0; i < 26; i++) {
            dp[s][i] = max(dp[s][i], dp[adj][i]);
        }
    }

    dp[s][(int)(str[s]-'A')]++;

    is_visiting[s] = 2;

    return false;
}

int main() {
    cin >> str;

    adj_nodes.resize(str.length());
    is_visiting.resize(str.length(), 0);
    dp.resize(str.length(), vector<int>(26,0));

    cin >> M;

    int from, to;
    for(int i = 0; i < M; i++) {
        cin >> from >> to;
        adj_nodes[from].push_back(to);
    }

    for(int i = 0; i < str.length(); i++) {
        if(dfs(i)) {
            cout << "NULL" << endl;
            return 0;
        }
    }

    int ans = 0;
    for(auto v : dp) {
        for(int i = 0; i < 26; i++) {
            ans = max(ans, v[i]);
        }
    }

    cout << ans << endl;
    return 0;
}