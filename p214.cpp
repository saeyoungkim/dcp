/**
 * @author s.kim
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Stripe.

Given an integer n, return the length of the longest consecutive run of 1s in its binary representation.

For example, given 156, you should return 3. (10011100) -> (01100011)
 */

#include <iostream>

using namespace std;

int countOne(int p) {
    int i = 1;
    int ret = 0;
    while((i & p) > 0) {
        i <<= 1;
        ret++;
    }

    return ret-1;
}

int main() {
    int n;
    cin >> n;

    n = ~n;

    int ans = 0;

    while(n != 0 and n != -1) {
        // 1000000
        // 0111111
        int tmp = n ^ (n-1);
        int co = countOne(tmp);
        ans = max(ans, co);

        n >>= (co+1);
    }

    cout << ans << endl;
}