#include <iostream>
#include <vector>
#include <map>

/**
 * @brief 
 * Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.

For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
 */

/**
 * @brief 
 * 1. bruteforce
 * 
 * result = 0;
 * schedules => array of schedule
 * for idx i = 0 to the size of schedules:
 *  count = 0;
 *  for idx j = i+1 to the size of schedules:
 *      if schedules[j].start_time <= schedules[i].start_time && schedules[j].end_time <= schedules[i].start_time:
 *          count++;
 *  result = max(result,count)
 * 
 * time complexity = O(n^2)
 * space complexcity = O(1)
 * 
 * 2. memorization
 */

void solve() {
    std::vector<std::pair<int,int> > schedules;

    schedules.push_back(std::make_pair(30,75));
    schedules.push_back(std::make_pair(0,50));
    schedules.push_back(std::make_pair(60,150));

    int counts[1000000] = {0};
    int max_end_time = 0;

    for(auto schedule : schedules) {
        max_end_time = std::max(max_end_time, schedule.second);
        for(int i = schedule.first ; i <= schedule.second; i++) {
            counts[i]++;
        }
    }

    int ret = 0;
    for(int i = 0; i <= max_end_time; i++) {
        ret = std::max(ret, counts[i]);
    }

    std::cout << ret << std::endl;

    return ;
}

void solve2() {
    std::vector<std::pair<int,int> > schedules;

    schedules.push_back(std::make_pair(30,75));
    schedules.push_back(std::make_pair(0,50));
    schedules.push_back(std::make_pair(60,150));

    std::map<int, int> time_counter;

    for(auto schedule : schedules) {
        time_counter[schedule.first] += 1;
        time_counter[schedule.second] -= 1;
    }

    int ret = 0;
    int tmp = 0;
    for(const auto& ct : time_counter) {
        tmp += ct.second;
        if(ret < tmp) {
            ret = tmp;
        }
    }

    std::cout << ret << std::endl;

    return ;
}

int main(void) {
    solve2();
}