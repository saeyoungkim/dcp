#include <list>
#include <vector>
#include <iostream>

std::vector<int> getMaxSubArray(const std::vector<int>& vec, int k){
    std::list<int> list;
    std::vector<int> ret;

    for(int i = 0; i < k; ++i){
        while(!list.empty() && list.back() < vec[i]){
            list.pop_back();
        }
        list.push_back(i);
        ret.push_back(vec[list.front()]);
    }

    for(int i = k; i < vec.size(); ++i){
        while(!list.empty() && list.front() <= i-k){
            list.pop_front();
        }
        while(!list.empty() && list.back() < vec[i]){
            list.pop_back();
        }
        list.push_back(i);
        ret.push_back(vec[list.front()]);
    }

    return ret;
}

int main(void) {
    
}