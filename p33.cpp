#include <iostream>
#include <queue>
#include <vector>

/**
 * @brief 
 * Good morning! Here's your coding interview problem for today.

This problem was asked by Microsoft.

Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.

Recall that the median of an even-numbered list is the average of the two middle numbers.
 */

/**
 * @brief 
 * 1. brute force
 * S => user array
 * Q => array
 * elem in Q:
 *  insert elem in S sorted order
 *  find median
 * 
 * time O(N^2)
 * space O(N)
 * 
 * 입력할 때 마다 새로운걸 내야하기 때문에 생각해보면 금방 값이 나오지 않으면은 안될 꺼 같다
 */

/**
 * @brief 
 * 2. use heap
 * 1) 미디언의 리스트를 가지고 있어야 한다
 * 2) 넣을 때 마다 바로 갱신될 수 있게 해야 한다
 * 
 * a1 a2 ... am
 * b1 b2 ... bn
 * 
 * m+1 >= n >= m
 * 
 */

using namespace std;

void solve() {
    int N;
    priority_queue<
        int,
        vector<int>,
        greater<int>
    > bigger_than_median;
    priority_queue<
        int,
        vector<int>,
        less<int>
    > smaller_than_median;

    while(true) {
        cin >> N;

        if(smaller_than_median.empty()) {
            smaller_than_median.push(N);
        } else {
            if(smaller_than_median.top() < N) {
                bigger_than_median.push(N);
            } else {
                smaller_than_median.push(N);
            }

            if(bigger_than_median.size() > smaller_than_median.size()) {
                int tmp = bigger_than_median.top();
                bigger_than_median.pop();
                smaller_than_median.push(tmp);
            } else if(smaller_than_median.size() > bigger_than_median.size()+1) {
                int tmp = smaller_than_median.top();
                smaller_than_median.pop();
                bigger_than_median.push(tmp);
            }
        }

        if((bigger_than_median.size() + smaller_than_median.size()) & 1) {
            cout << smaller_than_median.top() << endl;
        } else {
            cout  << (smaller_than_median.top() + bigger_than_median.top()) / (double)2 << endl;
        }
    }
}

int main(void) {
    solve();
}