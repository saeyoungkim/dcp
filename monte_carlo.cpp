#include <iostream>

double getPi(long N, double r){
    srand(time(0));

    double x, y = 0.0;
    long ct = 0;
    for(int i = 0; i < N; ++i){
        x = ((double)rand() / RAND_MAX) * r;
        y = ((double)rand() / RAND_MAX) * r;
        if(x*x + y*y <= r*r) ++ct;
    }

    return 4 * (double)ct / N;
}

int main(void){
    std::cout << getPi(100000000, 2) << std::endl;
}