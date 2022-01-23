#include <iostream>
#include <vector>

void solve() {
    std::vector<char> arr = {'G','B','R','R','B','R','G'};

    int r_pos = 0;
    int b_pos = arr.size();

    int idx = 0;
    while(idx < b_pos) {
        if(arr[idx] == 'R') {
            char tmp = arr[idx];
            arr[idx] = arr[r_pos];
            arr[r_pos++] = tmp;
            idx++;
        } else if(arr[idx] == 'B') {
            char tmp = arr[idx];
            arr[idx] = arr[--b_pos];
            arr[b_pos] = tmp;
        } else {
            idx++;
        }
    }

    for(auto ch : arr) {
        std::cout << ch << " , " ;
    }
    std::cout << std::endl;
}

int main(void) {
    solve();
}