/**
 * @file p162.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Square.

Given a list of words, return the shortest unique prefix of each word. For example, given the list:

dog
cat
apple
apricot
fish
Return the list:

d
c
app
apr
f

 */

#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<string> uniquePrefix(const vector<string>& list) {
    vector<string> ans(list.size(), "");
    
    int i = 1;

    while(true) {
        bool allCalculated = true;

        for(int i = 0; i < ans.size(); i++) {
            if(ans[i] == "") {
                allCalculated = false;
                break;
            }
        }
        
        if(allCalculated) return ans;

        unordered_map<string, vector<int>> um;
        
        for(int j = 0; j < list.size(); j++) {
            if(ans[j] == "") {
                if(i == list[j].size()) ans[j] = list[j];
                else um[list[j].substr(0,i)].push_back(j);
            }
        }

        for(auto p : um) {
            if(p.second.size() == 1) {
                ans[p.second.front()] = p.first;
            }
        }

        i += 1;
    }

    return {};
}

int main() {
    vector<string> list = {"dog", "cat", "apple", "apricot", "fish"};

    vector<string> ans = uniquePrefix(list);

    for_each(ans.begin(), ans.end(), [](const string& str) {
        cout << str << " ";
    });
    cout << endl;
}