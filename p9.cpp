#include <iostream>

void solve() {
    int N;
    std::cin >> N;
    
    long long  prev_max = INT64_MIN;
    long long  prev_prev_max = INT64_MIN;

    long long num;
    long long curr_max;
    long long tmp;
    for(int i = 0; i < N; i++) {
        std::cin >> num;
        if(prev_max == INT64_MIN) {
            prev_max = num;
            curr_max = num;
        } else if(prev_prev_max == INT64_MIN) {
            curr_max = std::max(num, prev_max);
            prev_prev_max = prev_max;
            prev_max = curr_max;
        } else {
            if(num < 0) {
                tmp = prev_prev_max;
            } else if(prev_prev_max < 0) {
                tmp = num;
            } else {
                tmp = prev_prev_max + num;
            }

            curr_max = std::max(tmp, prev_max);
            prev_prev_max = prev_max;
            prev_max = curr_max;
        }
    }

    std::cout << curr_max << std::endl;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();
}