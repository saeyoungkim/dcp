#include <iostream>
#include <vector>

void solve() {
    int k;
    std::cin >>k;

    std::vector<int> tmp(k);

    int arr[] = {10,2,5,7,8,8,5,3,8,102,45,52};

    std::vector<int> a(arr, arr+(sizeof(arr) / sizeof(arr[0])));

    for(int i = 0; i < k-1; i++) {
        for(int j = i; j >= 0; j--) {
            if(a[j] > a[j-1]) {
                a[j-1] = a[j];
            }
        }
    }

    for(int i = k-1; i <= a.size()-1; i++) {
        if(a[i] >= a[i-k+1]) {
            std::cout << a[i] << ", ";
        } else {
            std::cout << a[i-k+1] << ", ";
        }

        for(int j = i; j >= i-k+2 && a[j] > a[j-1]; j--) {
            a[j-1] = a[j];
        }
    }

    std::cout << std::endl;
}

int main(void) {
    solve();
}