#include <iostream>
#include <algorithm>
#include <vector>

/**
 * This problem was asked by Snapchat.
 * 
 * Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), 
 * and find the minimum number of rooms required.
 * 
 * For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
 **/

int get_number_of_rooms(std::vector<std::pair<int,int>>& schedules){
    std::sort(schedules.begin(), schedules.end());

    int max_rooms = 0;
    int rooms = 0, first_used_room = 0;
    int schedules_size = schedules.size();

    for(int idx = 0; idx < schedules_size; ++idx) {
        ++rooms;
        bool isFirst = true;
        for(int j = first_used_room; j < idx; ++j) {
            if(schedules[idx].first >= schedules[j].second){
                if(isFirst){
                    first_used_room = j;
                    isFirst = false;
                }
                --rooms;
            }
        }

        if(rooms > max_rooms) max_rooms = rooms;
    }

    return max_rooms;
}

void print(const std::vector<std::pair<int,int>>& schedules){
    for(auto& it : schedules){
        std::cout << it.first << " " << it.second << std::endl;
    }
}

int main(void) {
    std::vector<std::pair<int,int>> schedules({{30,75}, {0,50}, {10,60}, {60,150}});

    std::vector<std::pair<int,int>> schedules2({{30,75}, {0,50}, {60,150}});

    std::cout << get_number_of_rooms(schedules) << std::endl;

    std::cout << get_number_of_rooms(schedules2) << std::endl;
}