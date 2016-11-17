//15th NOV 2016
//www.codechef.com/problems/ALEXTASK
// LCM: O(n^2 * LCM)

#include <algorithm>
#include <cstdio>

using namespace std;

long long a[508];

long long lcm(long a, long b) {
    return a /__gcd(a ,b) * b;
}

int main()
{
    int t; scanf("%d", &t);

    while (t--) {
        int n; scanf("%d", &n);
        for (int i = 0; i < n; ++i)
            scanf("%d", a+i);

        long long ans = lcm(a[0], a[1]);
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j)
                ans = min(ans, lcm(a[i],a[j]));

        printf("%lld\n", ans);
    }

}

