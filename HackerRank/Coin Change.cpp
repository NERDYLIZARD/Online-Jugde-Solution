#include <cstdio>
#include <iostream>

using namespace std;

int m, n;
int c[4000];
long long dp[4000][4000];

long long wayCount(int n, int m) {

    if (n == 0)
        return 1;
    else if (n < 0)
        return 0;
    else if (m <= 0)
        return 0;
    else if (dp[n][m] != -1)
        return dp[n][m];
    else
        dp[n][m] = wayCount(n, m-1) + wayCount(n-c[m-1], m);

    return dp[n][m];

}

int main() {
//    n = 4, m = 3;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i)
        scanf("%d", c+i);

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j)
            dp[i][j] = -1;
    }

//    printf("%I64d\n", wayCount(n, m));
    cout << wayCount(n, m);

}









