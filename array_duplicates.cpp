/**
 * Given unsorted array of integers (NB. it can be array of negative, 0, positive values) return a list of duplicate values?

Assume the array size is less than 100. And the array elements are in the range of [-100000, 100000]

You can update input array but it's data type should remain the same (as array of integers).

The question is straight forward but the challenge is to answer this in O(N) time complexity and O(1) space complexity.

No sorting, no extra memory, no additional data structure.

I came up with mapping elements to index to store values but the range of elements makes it difficult to make sure the solution works on any input.

Example:
Input: [122, 32, 1, 0, 32, -22, -32, 44, -22, 0, -22]
Expected output: [32, -22, 0]
 */

#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

void solve1(const vector<int>& v) {
    unordered_map<int, int> memo;

    for_each(v.begin(), v.end(), [&](const int e){
        memo[e]++;
    });

    for(auto p : memo) {
        if(p.second > 1)
            cout << p.first << " ";
    }

    cout << endl;
}

int main() {
    vector<int> list = {122, 32, 1, 0, 32, -22, -32, 44, -22, 0, -22};

    solve1(list);
}