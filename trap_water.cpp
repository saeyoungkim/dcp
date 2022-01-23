#include <vector>
#include <iostream>

int trap_water(const std::vector<int>& heights){
    int i = 0;
    int j = heights.size()-1;

    int water = 0;
    while(i < j){
        if(heights[i] < heights[j]){
            int wall = heights[i];
            while(i < heights.size() && heights[i] <= wall){
                water += (wall - heights[i]);
                ++i;
            }
        }
        else {
            int wall = heights[j];
            while(j >= 0 && heights[j] <= wall){
                water += (wall - heights[j]);
                --j;
            }            
        }
    }

    return water;
}

int main(void){
    std::vector<int> heights1({10, 9, 1, 1, 6});
    std::vector<int> heights2({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});

    std::cout << trap_water(heights1) << std::endl;
    std::cout << trap_water(heights2) << std::endl;
}