#include <iostream>

long long x, y;

long long pow(long long x, long long y) {
    if(y == 0) {
        return 1;
    } else if(y == 1) {
        return x;
    } else if(y & 1) {
        return x * pow(x*x, y >> 1);
    }
    
    return pow(x*x, y >> 1);
}

int main() {
    std::cin >> x >> y;
    std::cout << pow(x,y) << std::endl;
}