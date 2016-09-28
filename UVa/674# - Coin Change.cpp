// 28th SEPT 2016
//uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=615
// DP: O(n*m)

#include <cstdio>
#include <cstring>

using namespace std;

int c[] = {50, 25, 10, 5, 1};
long long dp[8000][5];

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
    int n;
    memset(dp, -1, sizeof(dp));

    while (scanf("%d", &n) != EOF)
        printf("%I64d\n", wayCount(n, 5));

}









