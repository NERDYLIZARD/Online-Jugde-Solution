#include <cstdio>
#include <algorithm>

using namespace std;

long long a[100005];
long b[100005];
long long q[100005];


int main()
{
    int z; scanf("%d", &z);
    while (z--) {
        long n, m; scanf("%d%d", &n,&m);
        for (int i = 1; i <= n; ++i)
            scanf("%lld", a+i);

        sort(a+1, a+n+1, greater<long long>());

        long k = 1;
        for (int i = 1; i <= n; ++i)
            for (int j = i; j <= n; ++j)
                q[k++] = a[i];

        long x;
        for (int i = 1; i <= m; ++i) {
            scanf("%d", &x);
            printf("%lld\n", q[x]);
        }

    }


}



