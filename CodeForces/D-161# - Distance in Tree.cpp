// 09th SEP 2016
//codeforces.com/contest/161/problem/D
// DP: O(n*k)

#include <iostream>
#include <vector>

using namespace std;
vector<long> t[50008];
long dp[50008][508];
int k;

void accumulateDP(int n, int p) {
    dp[n][0] = 1;
    for(auto i : t[n]) {
        if (i != p) {
            accumulateDP(i, n);
            for (int j = 1; j <= k; ++j)
                dp[n][j] += dp[i][j-1];
        }
    }
}

void dfs(int n, int p) {
    for (auto i : t[n]) {
        if (i != p) {
            for (int j = k; j >= 1; --j) {
                dp[i][j] += dp[n][j-1];
                if (j > 1) dp[i][j] -= dp[i][j-2];
            }
            dfs(i, n);
        }
    }
}

int main() {
    long n; cin >> n;
    cin >> k;
    long x, y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        t[x].push_back(y);
        t[y].push_back(x);
    }

    accumulateDP(1, -1);
    dfs(1, -1);

    long long cnt = 0;
    for (int i = 1; i <= n; ++i)
        cnt += dp[i][k];
    cout << cnt/2LL;

}









