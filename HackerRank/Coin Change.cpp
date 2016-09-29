#include <cstdio>
#include <iostream>

using namespace std;

int m, n;
int c[4000];
long long dp[4000][4000];

long long wayCount(int n, int m) {

    if (n == 0) return 1;
    if (n < 0) return 0;
    if (m <= 0) return 0;

    if (dp[n][m] != -1)
        return dp[n][m];

    return dp[n][m] = wayCount(n, m-1)
                    + wayCount(n-c[m-1], m);
}

int main() {

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i)
        scanf("%d", c+i);

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j)
            dp[i][j] = -1;
    }

    cout << wayCount(n, m);

}









