#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;


void print(const vector<vector<int>>& v) {
    for(auto arr : v) {
        std::cout << "[ ";
        for(auto n : arr) {
            std::cout << n << " ";
        }
        std::cout << "]\n";
    }
}

void Input() {
    arr = {1,2,3,4,5,6,7,8,9,10};
}

vector<vector<int>> Solve(const vector<int>& arr, int idx) {
    if(idx == arr.size()) {
        return {{}};
    }

    vector<vector<int> > next = Solve(arr, idx+1);

    vector<vector<int> > ans;
    for(auto a : next) {
        ans.push_back(a);
        a.push_back(arr[idx]);
        ans.push_back(a);
    }

    return ans;
}

vector<vector<int>> Solve2() {
    vector<vector<int> > ans;

    for(int i = (1 << arr.size())-1; i >= 0; i--) {
        vector<int> sub;
        int j = 0;
        int k = i;
        while(k) {
            if(k&1) {
                sub.push_back(arr[j]);
            }
            k >>= 1;
            j++;
        }

        ans.push_back(sub);
    }

    return ans;
}


void solve() {
    Input();
    // vector<vector<int> > ans = Solve(arr, 0);
    vector<vector<int> > ans = Solve2();

    print(ans);
    std::cout << ans.size() << std::endl;
}

int main(void) {
    solve();
}