//15th NOV 2016
//www.codechef.com/problems/ALEXTASK
// LCM: O(n^2 * LCM)

#include <algorithm>
#include <cstdio>

using namespace std;

long long a[508];

int main()
{
    int t; scanf("%d", &t);

    while (t--) {
        int n; scanf("%d", &n);
        for (int i = 0; i < n; ++i)
            scanf("%d", a+i);

        long long ans = 1LL<<62;
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j)
                ans = min(ans, a[i] /__gcd(a[i],a[j]) * a[j]);

        printf("%lld\n", ans);
    }

}

