/**
 * @file p87.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-01-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<string, unordered_set<string> > Ns; 
unordered_map<string, unordered_set<string> > Ss;
unordered_map<string, unordered_set<string> > Es;
unordered_map<string, unordered_set<string> > Ws;

int N;

vector<string> split(const string& str) {
    int s = 0;
    vector<string> ret;
    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() or str[i] == ',') {
            ret.push_back(str.substr(s,i-s));
            s = i+1;
        }
    }

    return ret;
}

bool addEdges(const string& to, const string& dir, const string& from) {
    if(dir.find('N') != string::npos) {
        if(Ss[from].count(to)) {
            return false;
        } else if(Ns[to].count(from)) {
            return false;
        }

        Ns[from].insert(to);
        for(auto it = Ns[to].begin(); it != Ns[to].end(); it++) {
            if(Ns[from].count(*it)) {
                continue;
            } else if(!addEdges(*it,"N",from)) {
                return false;
            }
        }
        Ss[to].insert(from);
        for(auto it = Ss[from].begin(); it != Ss[from].end(); it++) {
            if(Ss[to].count(*it)) {
                continue;
            } else if(!addEdges(*it,"S",to)) {
                return false;
            }
        }
    }
    if(dir.find('S') != string::npos) {
        if(Ns[from].count(to)) {
            return false;
        } else if(Ss[to].count(from)) {
            return false;
        }

        Ss[from].insert(to);
        for(auto it = Ss[to].begin(); it != Ss[to].end(); it++) {
            if(Ss[from].count(*it)) {
                continue;
            } else if(!addEdges(*it,"S",from)) {
                return false;
            }
        }
        Ns[to].insert(from);
        for(auto it = Ns[from].begin(); it != Ns[from].end(); it++) {
            if(Ns[to].count(*it)) {
                continue;
            } else if(!addEdges(*it,"N",to)) {
                return false;
            }
        }
    }
    if(dir.find('E') != string::npos) {
        if(Ws[from].count(to)) {
            return false;
        } else if(Es[to].count(from)) {
            return false;
        }

        Es[from].insert(to);
        for(auto it = Es[to].begin(); it != Es[to].end(); it++) {
            if(Es[from].count(*it)) {
                continue;
            } else if(!addEdges(*it,"E",from)) {
                return false;
            }
        }
        Ws[to].insert(from);
        for(auto it = Ws[from].begin(); it != Ws[from].end(); it++) {
            if(Ws[to].count(*it)) {
                continue;
            } else if(!addEdges(*it,"W",to)) {
                return false;
            }
        }
    }
    if(dir.find('W') != string::npos) {
        if(Es[from].count(to)) {
            return false;
        } else if(Ws[to].count(from)) {
            return false;
        }

        Ws[from].insert(to);
        for(auto it = Ws[to].begin(); it != Ws[to].end(); it++) {
            if(Ws[from].count(*it)) {
                continue;
            } else if(!addEdges(*it,"W",from)) {
                return false;
            }
        }
        Es[to].insert(from);
        for(auto it = Es[from].begin(); it != Es[from].end(); it++) {
            if(Es[to].count(*it)) {
                continue;
            } else if(!addEdges(*it,"E",to)) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        vector<string> partition = split(tmp);

        if(!addEdges(partition[0], partition[1], partition[2])) {
            cout << boolalpha << false << endl;
            return 0;
        }
    }

    cout << boolalpha << true << endl;
}