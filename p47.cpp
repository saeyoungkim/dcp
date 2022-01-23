/**
 * @file p47.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * This problem was asked by Facebook.

Given a array of numbers representing the stock prices of a company in chronological order, write a function that calculates the maximum profit you could have made from buying and selling that stock once. You must buy before you can sell it.

For example, given [9, 11, 8, 5, 7, 10], you should return 5, since you could buy the stock at 5 dollars and sell it at 10 dollars.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int N;

void input() {
    cin >> N;
    int tmp;
    while(N--) {
        cin >> tmp;
        arr.push_back(tmp);
    }
}

void solve() {
    if(N == 0) {
        cout << "no stock exist." << endl;
        return ;
    }

    int min_stock = arr.front();
    int ans = 0;
    for(auto stock : arr) {
        if(stock >= min_stock) {
            ans = max(ans, stock - min_stock);
        }

        min_stock = min(min_stock, stock);
    }

    cout << ans << endl;
    return ;
}

int main(void) {
    input();
    solve();
}