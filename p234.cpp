/**
 * @file p234.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-08
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Microsoft.

Recall that the minimum spanning tree is the subset of edges of a tree that connect all its vertices with the smallest possible total edge weight. Given an undirected graph with weighted edges, compute the maximum weight spanning tree.
 */

#include <unordered_map>
#include <queue>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

class Union {
private:
    int size;
    vector<int> par;
    vector<int> sz;
    vector<int> weights;

public:
    Union(int n) : size(n) {
        par.resize(n);
        for(int i=0; i<n; i++) par[i] = i;
        
        sz.resize(n);
        for(int i=0; i<n; i++) sz[i] = 1;

        weights.resize(n);
        for(int i=0; i<n; i++) weights[i] = 0;
    }

    int findRoot(int x) {
        return par[x] == x ? x : findRoot(par[x]);
    }

    // return if all nodes are connected after merge
    bool merge(int x, int y, int w) {
        int rx = findRoot(x);
        int ry = findRoot(y);

        if(rx == ry) return false;
        else if(rx > ry) swap(rx, ry);

        par[ry] = rx;
        sz[rx] += sz[ry];
        weights[rx] += w + weights[ry];

        return sz[rx] == size;
    }

    int getWeights(int x) {
        return weights[findRoot(x)];
    }
};

int getMaximumWeightOfMinimumSpanningTree(const vector<vector<int>>& edges) {
    auto comp = [](const vector<int>& a, const vector<int>& b) {
        return a[2] <= b[2];
    };
    
    priority_queue<
        vector<int>,
        vector<vector<int>>,
        decltype(comp)
    > pq{comp};

    unordered_set<int> nodes;

    for(const auto& edge : edges) {
        pq.push({edge[0], edge[1], edge[2]});
        nodes.insert(edge[0]);
        nodes.insert(edge[1]);
    }

    Union u(nodes.size());
    while(not pq.empty()) {
        vector<int> t = pq.top();
        pq.pop();

        if(u.merge(t[0], t[1], t[2])) {
            return u.getWeights(t[1]);
        }
    }

    return -1;
}

int main() {
    vector<vector<int>> edges = {
        {0,3,3},
        {3,0,2},
        {0,1,10},
        {0,2,20},
        {1,2,5},
    };

    cout << getMaximumWeightOfMinimumSpanningTree(edges) << endl;
}