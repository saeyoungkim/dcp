#include <iostream>
#include <vector>
#include <list>

int merge(int i, int mid, int j, std::vector<int>& vec) {
    std::list<int> list;
    int left_start = i;
    int right_start = mid+1;

    int inversions = 0;

    while(left_start <= mid && right_start <= j){
        if(vec[left_start] <= vec[right_start]) list.push_back(vec[left_start++]);
        else {
            inversions += mid - left_start + 1;
            list.push_back(vec[right_start++]);
        }
    }

    while(left_start <= mid){
        list.push_back(vec[left_start++]);
    }

    while(right_start <= j){
        list.push_back(vec[right_start++]);
    }

    for(int k = i; k <= j; ++k){
        vec[k] = list.front();
        list.pop_front();
    }
    return inversions;
}

int mergeSort(int i, int j, std::vector<int>& vec){
    if(i >= j) return 0;

    int mid = i + ((j-i) >> 1);

    int left = mergeSort(i, mid, vec);
    int right = mergeSort(mid+1, j, vec);

    int inversions = merge(i, mid, j, vec);

    return left + right + inversions;
    
}

int countInversion(std::vector<int> vec) {
    int val = mergeSort(0, vec.size()-1, vec);

    return val;
}

int main(void) {
    std::vector<int> vec1({5,4,3});
    std::vector<int> vec2({7,3,2,1,10,20,71,11,9,88});

    std::cout << countInversion(vec1) << std::endl;
}