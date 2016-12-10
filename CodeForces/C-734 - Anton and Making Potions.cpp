// 05th DEC 2016
//codeforces.com/contest/734/problem/C
// BinarySearch: O(MlogK)

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long i64;
const long maxn = 200009;

i64 N;
long M, K;
i64 X, S;

int main()
{
    scanf("%I64d%d%d", &N,&M,&K);
    scanf("%I64d%I64d", &X,&S);
    vector<i64> A(M+1), B(M+1), C(K+1), D(K+1);
    for (int i = 1; i <= M; ++i) scanf("%I64d", &A[i]);
    for (int i = 1; i <= M; ++i) scanf("%I64d", &B[i]);
    for (int i = 1; i <= K; ++i) scanf("%I64d", &C[i]);
    for (int i = 1; i <= K; ++i) scanf("%I64d", &D[i]);
    A[0] = X; B[0] = 0;
    C[0] = 0; D[0] = 0;

    i64 ans = N*X;
    for (int i = 0; i <= M; ++i) {
        if (B[i] > S) continue;
        int j = upper_bound(D.begin(), D.end(), S-B[i])
                - D.begin() - 1;
        ans = min(ans, A[i]*(N-C[j]));
    }

    printf("%I64d", ans);

}
