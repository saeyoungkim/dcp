#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define MOD 100003

int dp[100001][100001];
vector<int> cs;

unordered_map<int,int> ct;

// exclusive e
int solve(int s, int e) {
    if((s == e) or (s+1 == e)) return 1;
    else if(dp[s][e] != 0) return dp[s][e];

    dp[s][e] = 0;
    for(int i = s+1; i < e; i++) {
        dp[s][e] = (dp[s][e] + (solve(s,i) * solve(i,e))) % MOD;
    }

    int c = e - s - 1 - ct[s];
    dp[s][e] = (dp[s][e] + c) % MOD;

    return dp[s][e];
}

int main() {
    int n;
    cin >> n;

    int c;
    for(int i = 0; i < n; i++){
        cin >> c;
        cs.push_back(c);
        ct[c]++;
    }

    sort(cs.begin(), cs.end());

    cout << solve(0, n) << endl;
}