// 27th NOV 2016
//codeforces.com/contest/735/problem/B
// Sorting: O(log n)

#include <cstdio>
#include <algorithm>

using namespace std;

bool wayToSort(int i, int j) { return i > j; }
long a[100008];
long n, n1, n2;

int main()
{
    scanf("%d%d%d", &n,&n1,&n2);
    for (int i = 0; i < n; ++i)
        scanf("%d", a+i);

    sort(a, a+n, wayToSort);

    if (n1 > n2) swap(n1, n2);

    long long maxSum = 0;
    for (int i = 0; i < n1; ++i)
        maxSum += a[i];

    long long minSum = 0;
    for (int i = n1; i < n1+n2; ++i)
        minSum += a[i];

    double ans = (double)maxSum/n1 + (double)minSum/n2;

    printf("%.8f", ans);

}



