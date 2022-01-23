#include <iostream>
#include <math.h>

#define COUNT 1e9

void solve() {
    long long x, y = 0.0;
    long long rand_max = (long long)0x7fffffff;
    long long rand_max_square = rand_max * rand_max;

    long ct = 0;


    for(int i = 0; i < COUNT; i++) {
        x = (long long)rand();
        y = (long long)rand();

        if(x*x + y*y <= rand_max_square) {
            ct++;
        }
    }

    std::cout << (double)(ct << 2) / COUNT << std::endl;

    return ;
}

int main(void) {
    solve();
}