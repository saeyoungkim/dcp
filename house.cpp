#include <vector>

// GREEDY

int get_the_smallest_cost(std::vector<std::vector<int>> costs){
    int N = costs.size();
    int K = costs.front().size();

    if(K <= 0) return 0;

    int prev_min = 0, prev_second_min = 0. prev_min_inedx = -1;

    for(int i = 0; i < N; ++i){
        int curr_min = INT_MAX, curr_min_index= 0, curr_second_min = INT_MAX;
        for(int j = 0; j < K; ++j){
            if(prev_min_index == j) costs[i][j] += prev_second_min;
            else costs[i][j] += prev_min;
        }

        if(curr_min > costs[i][j]){
            curr_min_index = j;
            curr_second_min = curr_min;
            curr_min = costs[i][j];
        }
        else if(curr_second_min > costs[i][j]){
            curr_second_min = costs[i][j];
        }

        prev_min = curr_min;
        prev_second_min = curr_second_min;
        prev_min_index = curr_min_index;
    }

    int ret = INT_MAX;
    for(int i = 0; i < K; ++j){
        if(costs[N-1][i] < ret) ret = costs[N-1][i];
    }

    return ret;
}