/**
 * @file p226.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-06-04
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Airbnb.

You come across a dictionary of sorted words in a language you've never seen before. Write a program that returns the correct order of letters in this language.

For example, given ['xww', 'wxyz', 'wxyw', 'ywx', 'ywz'], you should return ['x', 'z', 'w', 'y'].
 */

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void topologicalSort(char node, unordered_set<char>& s, unordered_map<char, vector<char>>& dependencies, vector<char>& ret) {
    if(not s.count(node)) return ;

    s.erase(node);

    for(char next : dependencies[node]) {
        topologicalSort(next, s, dependencies, ret);
    }

    ret.push_back(node);
}

vector<char> getOrderOfChar(vector<string>& arr) {
    unordered_map<char, vector<char>> dependencies;
    unordered_set<char> noVisited;

    for(string s : arr) {
        for(char c : s) {
            noVisited.insert(c);
        }
    }

    for(int i=0; i <arr.size()-1; i++) {
        int idx1 = 0, idx2 = 0;

        while(idx1 < arr[i].length() and idx2 < arr[i+1].length()) {
            if(arr[i][idx1] != arr[i+1][idx2]) break;

            idx1++;
            idx2++;
        }

        if(idx1 == arr[i].length() or idx2 == arr[i+1].length()) continue;

        dependencies[arr[i+1][idx2]].push_back(arr[i][idx1]);
    }

    vector<char> ret;

    unordered_set<char> nodes = noVisited;

    for(char node : nodes) {
        topologicalSort(node, noVisited, dependencies, ret);
    }

    return ret;
}

int main() {
    vector<string> arr = {"xww", "wxyz", "wxyw", "ywx", "ywz"};

    vector<char> order = getOrderOfChar(arr);

    for_each(order.begin(), order.end(), [](const char c) {
        cout << c << " ";
    });
    cout << endl;
}