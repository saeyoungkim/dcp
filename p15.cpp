#include <iostream>
#include <vector>
#include <unordered_map>

/**
 * @brief 
 * Given a stream of elements too large to store in memory, 
 * pick a random element from the stream with uniform probability.
 */

int stream[] = {1,6,2,7,3,4,5,22};

int solve() {
    int ct = 0;
    int ret = 0;

    for(const int v : stream) {
        int gamble = rand() % (ct+1);
        if(!gamble) {
            ret = v;
        }
        ct++;
    }

    return ret;
}

int main(void) {

    srand((unsigned) time(NULL));

    std::unordered_map<int, int> count;

    for(int i = 0; i < 1e8; i++) {
        count[solve()]++;
    }

    std::cout << "======================================" << std::endl;
    for(const auto& ct : count) {
        std::cout << ct.first << " : " << ct.second << std::endl;
    }
}