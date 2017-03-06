// 01st FEB 2017
//codeforces.com/contest/761/problem/B
// impl: O(n^2)

#include <cstdio>

using namespace std;

int n, L;
int s[108], t[108], a[108], b[108];

int main()
{
    scanf("%d%d", &n,&L);
    for (int i = 0; i < n; ++i)
        scanf("%d", s+i);
    for (int i = 0; i < n; ++i)
        scanf("%d", t+i);

    for (int i = 1; i < n; ++i) {
        a[i] = s[i] - s[i-1];
        b[i] = t[i] - t[i-1];
    }

    a[0] = L - s[n-1] + s[0];
    b[0] = L - t[n-1] + t[0];

    for (int i = 0; i < n; ++i) {
        int j;
        for (j=0; j < n; ++j)
            if (a[(i+j)%n] != b[j]) break;

        if (n == j)
            return 0*puts("YES");
    }
    return 0*puts("NO");


}



