#include <iostream>
#include <unordered_map>
#include <vector>

int N;
int k;

void solve() {
    std::cin >> N >> k;

    std::vector<int> arr;
    int tmp;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }

    std::unordered_map<int,int> memo;
    for (int i = 0; i < N; i++) {
        memo[arr[i]]++;
    }

    for (int i = 0; i < N; i++) {
        int f = k - arr[i];
        if (k == f && memo[f] > 1) {
            std::cout << std::boolalpha << true << std::endl;
            return ;
        } else if (k != f && memo[f]) {
            std::cout << std::boolalpha << true << std::endl;
            return ;
        }
    }

    std::cout << std::boolalpha << false << std::endl;
    return;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();
}