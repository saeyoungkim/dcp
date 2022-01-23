#include <iostream>
#include <vector>
#include <cmath>

int N;

void solve() {
    std::cin >> N;
    std::vector<int> arr;
    int tmp;
    for(int i = 0;i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }

    int end = 0;
    int idx = 0;
    while(idx < N) {
        if (arr[idx] > 0) {
            int tmp = arr[idx];
            arr[idx] = arr[end];
            arr[end] = tmp;
            end++;
        }
        idx++;
    }

    for (int i = 0; i < end; i++) {
        int j = std::abs(arr[i]) - 1;
        if(j >= end) {
            continue;
        } else {
            if(arr[j] > 0) arr[j] *= -1;
        }
    }

    for (int i = 0; i < end; i++) {
        if (arr[i] < 0) {
            continue;
        } else {
            std::cout << i+1 << std::endl;
            return ;
        }
    }

    std::cout << end+1 << std::endl;
    return ;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();
}