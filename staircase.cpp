#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>

std::ostream& operator<<(std::ostream& os, const std::list<int>& vec){
    os << "[";
    for(const auto& it : vec){
        os << " " << it;
    }
    os << " ]\n";

    return os;
}

std::vector<std::list<int>> stairCase(int n){

    static std::unordered_map<int , std::vector<std::list<int>>> uom = {{0, {{}}}, {1 , {{1}}}};

    if(n == 0 || !uom[n].empty()) return uom[n];

    std::vector<std::list<int>> lists_1 = stairCase(n-1), lists_2 = stairCase(n-2);
    
    for(auto& list : lists_1) {
        list.push_front(1);
    }

    for(auto& list : lists_2) {
        list.push_front(2);
    }

    lists_1.insert(lists_1.end(), lists_2.begin(), lists_2.end());

    return (uom[n] = lists_1);
}

std::vector<std::list<int>> stairCaseWithSteps(int S, const std::vector<int>& X){
    static std::unordered_map<int , std::vector<std::list<int>>> uom2 = {{0, {}}};

    if(S < 0) return {};

    if(!uom2[S].empty()) return uom2[S];
    
    std::vector<std::list<int>> ret;

    for(auto step : X){
        if(S == step){
            ret.push_back({step});
        }
        else {
            auto temp = stairCaseWithSteps(S - step, X);
            if(temp.empty()) continue;
            for(auto& list : temp){
                list.push_front(step);
            }
            ret.insert(ret.end(), temp.begin(), temp.end());
        }
    }

    return (uom2[S] = ret);
}

int main(void) {
    int n;
    std::cin >> n;
    auto ret = stairCaseWithSteps(n, {1,2,3});

    for(const auto& list : ret){
        std::cout << list;
    }

    return 0;
}