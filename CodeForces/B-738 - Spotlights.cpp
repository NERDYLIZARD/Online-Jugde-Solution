// 22nd NOV 2016
//codeforces.com/contest/729/problem/B
// impl: O(n^2)
    // dp a bit

#include <cstdio>

using namespace std;
int A[1008][1008];
bool L[1008][1008], R[1008][1008],
    T[1008][1008], B[1008][1008];

int main()
{
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            scanf("%d", &A[i][j]);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j)
            L[i][j] = A[i][j-1] | L[i][j-1];
        for (int j = m; j >= 1; --j)
            R[i][j] = A[i][j+1] | R[i][j+1];
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j)
            T[j][i] = A[j-1][i] | T[j-1][i];
        for (int j = n; j >= 1; --j)
            B[j][i] = A[j+1][i] | B[j+1][i];
    }

    long cnt = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (!A[i][j])
                cnt += L[i][j] + R[i][j]
                    + T[i][j] + B[i][j];

    printf("%I32d", cnt);


}



