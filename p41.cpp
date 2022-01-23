/**
 * @file p41.cpp
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Facebook.

Given an unordered list of flights taken by someone, each represented as (origin, destination) pairs, and a starting airport, compute the person's itinerary. If no such itinerary exists, return null. If there are multiple possible itineraries, return the lexicographically smallest one. All flights must be used in the itinerary.

For example, given the list of flights [('SFO', 'HKO'), ('YYZ', 'SFO'), ('YUL', 'YYZ'), ('HKO', 'ORD')] and starting airport 'YUL', you should return the list ['YUL', 'YYZ', 'SFO', 'HKO', 'ORD'].

Given the list of flights [('SFO', 'COM'), ('COM', 'YYZ')] and starting airport 'COM', you should return null.

Given the list of flights [('A', 'B'), ('A', 'C'), ('B', 'C'), ('C', 'A')] and starting airport 'A', you should return the list ['A', 'B', 'C', 'A', 'C'] even though ['A', 'C', 'A', 'B', 'C'] is also a valid itinerary. However, the first one is lexicographically smaller.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<pair<string,string>> flight_lists = {
    make_pair("SFO", "HKO"), 
    make_pair("YYZ", "SFO"),
    make_pair("YUL", "YYZ"),
    make_pair("HKO", "ORD"),
};

// vector<pair<string,string>> flight_lists = {
//     make_pair("A", "B"), 
//     make_pair("A", "C"),
//     make_pair("B", "C"),
//     make_pair("C", "A"),
// };

unordered_map<string, vector<string>> memo;

string src;

bool _solve(vector<string>& ans, const string& src) {
    ans.push_back(src);

    if(ans.size() == flight_lists.size()+1) {
        return true;
    }

    vector<string> dsts = memo[src];
    for(int i = 0; i < dsts.size(); i++) {
        if(dsts[i].length() > 0) {
            string dst = dsts[i];
            // visited
            memo[src][i] = "";
            if(_solve(ans, dst)) {
                return true;
            }
            memo[src][i] = dst;
        }
    }

    ans.pop_back();

    return false;
}

void Input() {
    cin >> src;
}

void Solve() {
    vector<string> ans;

    for(auto flight : flight_lists) {
        memo[flight.first].push_back(flight.second);
    }

    for(auto p : memo) {
        sort(p.second.begin(), p.second.end());
    }

    _solve(ans, src);

    std::cout << "[ ";
    for(auto f : ans) {
        std::cout << f << ", ";
    }
    std::cout << "]\n";
}

void solve() {
    Input();
    Solve();
}

int main(void) {
    solve();
}