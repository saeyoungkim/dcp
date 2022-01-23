#include <iostream>
#include <vector>

int buy_and_sell_stock(const std::vector<int>& stocks) {
    if(stocks.size() <= 1) return 0;

    int min_stock = stocks.front();
    int max_diff = INT_MIN;

    for(const auto it : stocks) {
        if(it - min_stock > max_diff) max_diff = it - min_stock;
        if(it < min_stock) min_stock = it;
    }

    return max_diff;
}

int main(void) {
    std::vector<int> stocks({9, 11, 8, 5, 7, 10});

    std::cout << buy_and_sell_stock(stocks) << std::endl;

    return 0;
}