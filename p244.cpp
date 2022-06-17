#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sieve(vector<bool>& arr) {
    int sq = (int)sqrt((double)(arr.size()-1));
    for(int i=1; i<=sq; i++) {
        if(arr[i]) {
            for(int j=2*i; j<arr.size(); j+=i) arr[j] = false;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<bool> arr(N+1, true);
    arr[1] = false;

    sieve(arr);

    for(int i=1; i<=N; i++) {
        if(arr[i]) cout << i << " ";
    }
    cout << endl;
}