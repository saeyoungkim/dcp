#include <iostream>
#include <vector>

int get_maximum_sum_contiguous(const std::vector<int>& vec) {
    int max_previous = 0;
    int max_with_end = 0;
    for(auto it : vec){
        if(max_with_end + it >= max_previous) max_previous = max_with_end = max_with_end + it;
        else {
            if(it >= 0 && max_with_end < 0) max_with_end = it;
            else max_with_end += it;
        }
    }

    return max_previous;
}

int main(void) {
    std::vector<int> vec({-5, -1, -8, -9});

    std::cout << get_maximum_sum_contiguous(vec) << std::endl;
    return 0;
}