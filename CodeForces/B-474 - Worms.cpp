// 10th DEC 2016
//codeforces.com/contest/474/problem/B
// BinarySearch: O(MlogN)

#include <cstdio>
#include <algorithm>

using namespace std;

long a[100008];

int main()
{
    long n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", a+i);
        a[i] = a[i] + a[i-1];
    }

    long m; scanf("%d", &m);
    while (m--) {
        long x; scanf("%d", &x);
        long index = lower_bound(a+1, a+1+n, x)
                    - (a+1) + 1;
        printf("%d\n", index);

    }


}



