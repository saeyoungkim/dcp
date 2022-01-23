#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>

std::string str;
std::string arr[] = {"quick", "brown", "fox", "the"};
std::unordered_map<std::string,int> dict;
std::vector< std::list<std::string>* > dp; 

void Input() {
    std::cin >> str;
    for(int i = 0; i < str.length(); i++) {
        dp.push_back(NULL);
    }
    dp.push_back(new std::list<std::string>());

    for(const auto& v : arr) {
        dict[v]++;
    }
}

std::list<std::string>* Solve(const std::string& str, int i) {
    if(i == str.size() || dp[i]) {
        return dp[i];
    }

    std::string sub_str;
    for(int j = 1; j <= str.length()-i; j++) {
        std::list<std::string> *tmp = NULL;
        sub_str = str.substr(i, j);
        if (dict[sub_str]) {
            dict[sub_str]--;
            tmp = Solve(str, i+j);
            dict[sub_str]++;
        }

        if(tmp != NULL) {
            tmp->push_front(sub_str);
            return tmp;
        }
    }

    dp[i] = NULL;
    return dp[i];
}

void solve() {
    Input();
    std::list<std::string>* list = Solve(str, 0);

    if(list) {
        std::cout << "[";
        for(auto v : *list) {
            std::cout << v << ", ";
        }
        std::cout << "]\n";
    } else {
        std::cout << "null" << std::endl; 
    }
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();
}