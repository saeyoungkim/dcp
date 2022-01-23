#include <iostream>

typedef int *pair;

pair cons(int a, int b) {
    pair p = new int[2];
    p[0] = a;
    p[1] = b;
    return p;
}

int car(const pair& p) {
    return p[0];
}

int cdr(const pair& p) {
    return p[1];
}

int main() {
    auto p = cons(1,20);

    std::cout << car(p) << std::endl;
    std::cout << cdr(p) << std::endl;

    delete p;
}