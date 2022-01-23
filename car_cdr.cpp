#include <iostream>
#include <string>

template <typename T, typename V>
class pair {
public:
    pair(const T& first, const V& second) : _first(first), _second(second) {}

    T _first;
    V _second;
};

template <typename T, typename V>
pair<T,V> cons(const T& a, const V& b) {
    return pair<T,V>(a,b);
}

template <typename T, typename V>
T car(const pair<T,V>& pair){
    return pair._first;
}

template <typename T, typename V>
V cdr(const pair<T,V>& pair){
    return pair._second;
}

int main(void) {
    auto _pair = cons(5, true);
    std::cout << std::boolalpha << car(cons(5, true)) << " " << cdr(cons(5, true)) << std::endl;
}