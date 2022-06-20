/**
 * @file p246.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-20
 * 
 * This problem was asked by Dropbox.

Given a list of words, determine whether the words can be chained to form a circle. A word X can be placed in front of another word Y in a circle if the last character of X is same as the first character of Y.

For example, the words ['chair', 'height', 'racket', touch', 'tunic'] can form the following circle: chair --> racket --> touch --> height --> tunic --> chair.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool _canFormCircle(const string& s, unordered_map<string, vector<string>>& edges, unordered_set<string>& visited) {
    if(visited.count(s)) return visited.size() == edges.size();

    visited.insert(s);

    for(const string& next : edges[s]) {
        if(_canFormCircle(next, edges, visited)) return true;
    }

    return false;
}

bool canFormCircle(unordered_map<string, vector<string>>& edges) {
    if(edges.size() == 0) return false;

    unordered_set<string> visited;

    string s = edges.begin()->first;
    return _canFormCircle(s, edges, visited);
}

int main() {
    vector<string> words = {"chair", "height", "racket", "touch", "tunic"};

    unordered_map<string, vector<string>> edges;

    for(int i=0; i<words.size(); i++) {
        for(int j=0; j<words.size(); j++) {
            if(i != j and words[i].back() == words[j].front()) edges[words[i]].push_back(words[j]);
        }
    }

    cout << boolalpha << canFormCircle(edges) << endl;
}