#include <iostream>
#include <vector>

int N;

void solve() {
    std::cin >> N;

    int tmp;
    std::vector<int> arr;
    for (int i = 0; i < N; i++) {
        std::cin >> tmp;
        arr.push_back(tmp);
    }

    std::vector<int> ret(arr.size(), arr.front());
    if (arr.size() == 1) {
        std::for_each(ret.begin(), ret.end(), [](int a) {
            std::cout << a << ", ";
        });
        std::cout << '\n';
        return ;
    }

    std::vector<int> ltor(arr.size(), 1), rtol(arr.size(), 1);

    for (int i = 0; i < N; i++) {
        int prev = i == 0 ? 1 : ltor[i-1];
        ltor[i] = arr[i] * prev;
    }

    for (int i = N-1; i >= 0; i--) {
        int prev = i == N-1 ? 1 : rtol[i+1];
        rtol[i] = arr[i] * prev;
    }

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            ret[i] = rtol[i+1];
        } else if (i == N-1) {
            ret[i] = ltor[i-1];
        } else {
            ret[i] = ltor[i-1] * rtol[i+1];
        }
    }

    std::for_each(ret.begin(), ret.end(), [](int a) {
        std::cout << a << ", ";
    });
    std::cout << '\n';
    return ;
}

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();
}