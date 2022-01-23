#include <iostream>
#include <vector>

size_t findPositiveSet(std::vector<int>& vec) {
    size_t i = 0;
    size_t j = vec.size()-1;
    while(i <= j && i < vec.size()) {
        if(vec[i] > 0){
            if(vec[j] <= 0){
                std::swap(vec[i], vec[j]);
                ++i;
            }
            --j;
        } else ++i;
    }

    return i;
}

unsigned int findTheLowestPositiveInteger(std::vector<int> vec) {
    size_t start_idx = findPositiveSet(vec);
    
    if(start_idx == vec.size()) return 1;

    unsigned real_len = vec.size() - start_idx;

    std::cout << "start idx : " << start_idx << " , set length : " << real_len << std::endl;
    for(auto val: vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    for(size_t idx = start_idx; idx < vec.size(); ++idx) {
        unsigned int curr_val = std::abs(vec[idx]);
        if(1 <= curr_val && curr_val <= real_len) {
            if(vec[start_idx + curr_val - 1] >= 0) vec[start_idx + curr_val - 1] *= -1;
        }
    }

    unsigned int pivot = 1;
    for(size_t idx = start_idx; idx < vec.size(); ++idx) {
        if(vec[idx] < 0) ++pivot;
        else break;
    }

    return pivot;
}

int main(void) {
    std::vector<int> arr = {-1,-2,-3,-4,1};
    std::cout << findTheLowestPositiveInteger(arr) << std::endl;
    return 0;
}