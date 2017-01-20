// 19th JAN 2017
//codeforces.com/contest/758/problem/A
// impl: O(n)

#include <cstdio>
#include <algorithm>

using namespace std;

int a[108];

int main()
{
    int n; scanf("%d", &n);

    int mx = 0;
    long sm = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", a+i);
        mx = max(mx, a[i]);
        sm += a[i];
    }

    printf("%d", n*mx - sm);


}



