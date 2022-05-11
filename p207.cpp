/**
 * @file p207.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-12
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Dropbox.

Given an undirected graph G, check whether it is bipartite. Recall that a graph is bipartite if its vertices can be divided into two independent sets, U and V, such that no edge connects vertices of the same set.
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool _isBiPartite(unordered_map<int, vector<int>>& graph, vector<int>& groupNumber, int node, int group) {
    groupNumber[node] = group;

    for(const int next : graph[node]) {
        if(groupNumber[next] == (group^1))
            continue;
        else if(groupNumber[next] == -1)
            _isBiPartite(graph, groupNumber, next, group^1);
        else
            return false;
    }

    return true;   
}

bool isBiPartite(const vector<vector<int>>& edges, int n) {
    unordered_map<int, vector<int>> graph;

    for(const vector<int>& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    vector<int> groupNumber(n+1, -1);

    for(int i = 1; i <= n; i++) {
        if(groupNumber[i] == -1 && !_isBiPartite(graph, groupNumber, i, 0)) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<vector<int>> edges1 = {{1,2}, {2,3}};
    vector<vector<int>> edges2 = {{1,2}, {2,3}, {1,3}};
    int n = 3;

    cout << boolalpha << isBiPartite(edges1, n) << endl;
    cout << boolalpha << isBiPartite(edges2, n) << endl;
}