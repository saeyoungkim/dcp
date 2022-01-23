#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec){
    os << "{ ";
    for(auto it : vec){
        os << it << " ";
    }
    os << "}";
    return os;
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<int>>& vec){
    os << "{\n";
    for(auto it : vec){
        os << it << ",\n";
    }
    os << "}";
    return os;
}

void create_power_set (
    std::vector<std::vector<int>>& power_set,
    const std::vector<int>& set, 
    size_t i
){
    if(i == set.size()) return ;
    
    int end = 1 << i;
    int it = 0;
    while(it < end){
        power_set.push_back(power_set[it]);
        power_set[it].push_back(set[i]);
        ++it;
    }

    create_power_set(power_set, set, i+1);
}

int main(void){
    std::vector<std::vector<int>> power_set({{}});
    std::vector<int> set({1,2,5,7,10});

    create_power_set(power_set, set, 0);

    std::cout << power_set << std::endl;
    std::cout << power_set.size() << std::endl;
}