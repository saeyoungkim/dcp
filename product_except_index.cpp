#include <vector>
#include <iostream>

int main(void) {
    std::vector<int> vec = {3,2,1};

    std::vector<int> aesc_vec;

    int val = 1;
    for(const auto& i: vec){
        val *= i;
        aesc_vec.push_back(val);
    }

    std::vector<int> desc_vec;
    val = 1;
        for(auto it = vec.rbegin(); it != vec.rend(); ++it){
        val *= *it;
        desc_vec.insert(desc_vec.begin(), val);
    }

    std::vector<int> ret;
    for(int i = 0; i < vec.size(); ++i) {
        if(i == 0) ret.push_back(desc_vec[i+1]);
        else if(i == vec.size()-1) ret.push_back(aesc_vec[i-1]);
        else ret.push_back(aesc_vec[i-1] * desc_vec[i+1]);
    }

    for(const auto i : ret) {
        std::cout << i << " "; 
    }
    std::cout << std::endl;
}