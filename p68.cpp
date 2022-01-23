/**
 * @file p68.cpp
 * @author s.kim
 * @version 0.1
 * @date 2021-12-21
 * 
 * @copyright Copyright (c) 2021
 * 
 * This problem was asked by Google.

On our special chessboard, two bishops attack each other if they share the same diagonal. This includes bishops that have another bishop located between them, i.e. bishops can attack through pieces.

You are given N bishops, represented as (row, column) tuples on a M by M chessboard. Write a function to count the number of pairs of bishops that attack each other. The ordering of the pair doesn't matter: (1, 2) is considered the same as (2, 1).

For example, given M = 5 and the list of bishops:

(0, 0)
(1, 2)
(2, 2)
(4, 0)
The board would look like this:

[b 0 0 0 0]
[0 0 b 0 0]
[0 0 b 0 0]
[0 0 0 0 0]
[b 0 0 0 0]
You should return 2, since bishops 1 and 3 attack each other, as well as bishops 3 and 4.
 */

#include <iostream>
#include <unordered_map>

int M;
int K; // the placement of bishop
int x, y;

using namespace std;

int main() {
    unordered_map<int, int> lt_to_rd;
    unordered_map<int, int> rt_to_ld;
    cin >> M >> K;

    int sum = 0;
    for(int i = 0; i < K; i++) {
        cin >> x >> y;
        int ltrd = x-y;
        int rtld = x+y;
        if(lt_to_rd.count(ltrd)) {
            sum += lt_to_rd[ltrd];
        }
        if(rt_to_ld.count(rtld)) {
            sum += rt_to_ld[rtld];
        }
        lt_to_rd[ltrd]++;
        rt_to_ld[rtld]++;
    }

    cout << sum << endl;
    return 0;
}