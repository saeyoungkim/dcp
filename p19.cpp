#include <iostream>
#include <vector>

void solve() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int> > cost(K, std::vector<int>(N));

    int tmp;
    for(int i = 0; i < K; i++) {
        for(int j = 0; j < N; j++) {
            std::cin >> tmp;
            cost[i][j] = tmp;
        }
    }

    int prev_minimum_sum = 0;
    int prev_minimum_idx = -1;
    int prev_second_sum = 0;
    
    for(int i = 0; i < N; i++) {
        int curr_minimum_sum = INT32_MAX;
        int curr_minimum_idx = -1;
        int curr_second_sum = INT32_MAX;

        for(int j = 0; j < K; j++) {
            if(prev_minimum_idx == j) {
                cost[j][i] += prev_second_sum;
            } else {
                cost[j][i] += prev_minimum_sum;
            }

            if(cost[j][i] < curr_minimum_sum) {
                curr_second_sum = curr_minimum_sum;
                curr_minimum_sum = cost[j][i];
                curr_minimum_idx = j;
            } else if(cost[j][i] < curr_second_sum) {
                curr_second_sum = cost[j][i];
            }
        }

        prev_minimum_sum = curr_minimum_sum;
        prev_minimum_idx = curr_minimum_idx;
        prev_second_sum = curr_second_sum;
    }

    int ret = INT_MAX;
    for(int i = 0; i < K; i++) {
        ret = std::min(ret, cost[i][N-1]);
    }

    std::cout << ret << std::endl;
}

int main(void) {
    solve();

    return 0;
}