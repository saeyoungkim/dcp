/**
 * @file p241.cpp
 * @author s.kim
 * @version 0.1
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 * This problem was asked by Palantir.

In academia, the h-index is a metric used to calculate the impact of a researcher's papers. It is calculated as follows:

A researcher has index h if at least h of her N papers have h citations each. If there are multiple h satisfying this formula, the maximum is chosen.

For example, suppose N = 5, and the respective citations of each paper are [4, 3, 0, 1, 5]. Then the h-index would be 3, since the researcher has 3 papers with at least 3 citations.

Given a list of paper citations of a researcher, calculate their h-index.


 */

#include <iostream>
#include <vector>

using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());
    
    for(int h=citations.size(); h>0; h--) {
        auto upper = upper_bound(citations.begin(), citations.end(), h);
        auto lower = lower_bound(citations.begin(), citations.end(), h);
        
        int withoutHToEnd = distance(upper, citations.end());
        int wihtHToEnd = distance(lower, citations.end());
        
        if(withoutHToEnd <= h and h <= wihtHToEnd) return h;
    }
    return 0;
}

int main() {
    vector<int> arr = {4,3,0,1,5};

    cout << hIndex(arr) << endl;    
}