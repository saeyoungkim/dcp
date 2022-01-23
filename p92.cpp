/**
 * @file p92.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 This problem was asked by Airbnb.

We're given a hashmap associating each courseId key with a list of courseIds values, which represents that the prerequisites of courseId are courseIds. Return a sorted ordering of courses such that we can finish all courses.

Return null if there is no such ordering.

For example, given {'CSC300': ['CSC100', 'CSC200'], 'CSC200': ['CSC100'], 'CSC100': []}, should return ['CSC100', 'CSC200', 'CSCS300'].
 */

// toplogical sort

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<string ,vector<string>> dependencies;
vector<string> courses;

unordered_map<string,int> visited; // 0 non 1 visiting 2 already

void input() {
    dependencies["CSC300"].push_back("CSC100");
    dependencies["CSC300"].push_back("CSC200");
    dependencies["CSC200"].push_back("CSC100");
    dependencies["CSC100"].push_back("CSC300");

    courses.push_back("CSC100");
    courses.push_back("CSC200");
    courses.push_back("CSC300");
}

bool getAllDependencies(vector<string>& courses, const string& course) {
    if(visited[course] == 1) { // cycle exist
        return false;
    } else if(visited[course] == 2) {
        return true;
    }

    visited[course] = 1;
    for(auto c : dependencies[course]) {
        if(!getAllDependencies(courses, c)) {
            return false;
        }
    }

    courses.push_back(course);
    visited[course] = 2;

    return true;
}

void solve() {
    vector<string> ans;

    for(auto course : courses) {
        if(not visited[course]) {
            bool ret = getAllDependencies(ans, course);
            if(!ret) {
                cout << "cycle exist" << endl;
                exit(1);
            }
        }
    }

    cout << "[ ";
    for(auto c : ans) {
        cout << c << ", ";
    }
    cout << "]\n";

    return ;
}

int main() {
    input();
    solve();
}