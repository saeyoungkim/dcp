#include <iostream>
#include <vector>

int _solve(std::vector<int>& steps, int n, const std::vector<int>& climb_set) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    } else if (steps[n] != -1) {
        return steps[n];
    }

    int ret = 0;
    for(const auto& climb : climb_set) {
        ret += _solve(steps, n - climb, climb_set);
    }

    steps[n] = ret;

    return steps[n];
}

void solve() {
    std::vector<int> climb_set;

    int M, N;
    std::cin >> M >> N;

    int tmp;
    for(int i = 0; i < M; i++) {
        std::cin >> tmp;
        climb_set.push_back(tmp);
    }

    std::vector<int> steps(N+1, -1);
    steps[0] = 0;

    int ret = _solve(steps, N, climb_set);
    
    std::cout << ret << std::endl;

    return ;
}

int main(void) {
    solve();
}