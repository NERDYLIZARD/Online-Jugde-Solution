//codeforces.com/problemset/problem/431/C
#include <iostream>

using namespace std;

long long dfs(long long, int);
int n, k, d;
long long mod = 1000000007;
long long dp[102][2];

int main() {
    for (int i = 1; i <= 102; ++i){
        dp[i][0] = -1;
        dp[i][1] = -1;
    }

    cin >> n >> k >> d;

    long long cnt = 0;
    for (int i = 1; i <= k; ++i) {
        cnt += dfs(i, i>=d);
        cnt %= mod;
    }
    cout << cnt ;
}

long long dfs(long long w, int check) {
    if (dp[w][check] != -1)
        return dp[w][check];

    if (w > n)
        dp[w][check] = 0;

    else if (w == n && check)
        dp[w][check] = 1;

    else {
        long long cnt = 0;
        for (int it = 1; it <= k; ++it) {
            if (w + it <= n) {
                cnt += dfs(w + it, check || it>=d);
                cnt %= mod;
            }
        }
        dp[w][check] = cnt;
    }
    return dp[w][check];
}


