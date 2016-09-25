// 23th SEPT 2016
//codeforces.com/contest/719/problem/A
#include <cstdio>

using namespace std;

int main()
{
    int n; scanf("%d", &n);
    int a[n+1];
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);

    if (n <= 1 &&
        (0 < a[n] && a[n] < 15) ) {puts("-1"); return 0;}

    if (a[n] == 15)
        puts("DOWN");
    else if (a[n] == 0)
        puts("UP");
    else
        if (a[n] > a[n-1])
            puts("UP");
        else
            puts("DOWN");

}

