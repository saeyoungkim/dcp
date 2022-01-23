#include <iostream>
#include <vector>

int largestNumberNonAdjacent(const std::vector<int>& vec){
    if(vec.empty()) return 0;
    else if(vec.size() == 1) return vec[0];
    else if(vec.size() == 2) return std::max(vec[0], vec[1]);

    int prev_prev = vec[0]; // i-2
    int prev = std::max(vec[0], vec[1]); // i-1
    int largestSum = prev;

    for(size_t i = 2; i < vec.size(); ++i){
        if(vec[i] > 0){
            if(prev_prev <= 0 && prev <= 0){
                largestSum = std::max(vec[i], std::max(prev_prev, prev));
                prev_prev = prev;
                prev = largestSum;
            }
            else if(prev_prev + vec[i] > prev){
                largestSum = prev_prev + vec[i];
                prev_prev = prev;
                prev = largestSum;
            }
            else {
                prev_prev = prev;
                largestSum = prev;
            }
        }
        else {
            if(prev_prev <= 0 && prev <= 0){
                largestSum = std::max(vec[i], std::max(prev_prev, prev));
                prev_prev = prev;
                prev = largestSum;
            }
            else {
                prev_prev = prev;
                largestSum = prev;
            }
        }
        std::cout << prev_prev << " " << prev << " " << largestSum << std::endl;
    }

    return largestSum;
}

int main(void) {
    std::vector<int> vec = {-56,-24,5,-8,-6, 11, 1};
    std::cout << largestNumberNonAdjacent(vec) << std::endl;
}