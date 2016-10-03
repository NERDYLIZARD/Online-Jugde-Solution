// 03rd OCT 2016
//codeforces.com/contest/723/problem/A
// impl: O(1)

#include <cstdio>
#include <algorithm>

using namespace std;

int a[3];

int main()
{
    for (int i = 0; i < 3; ++i)
        scanf("%d", a+i);

    sort(a, a+3);

    printf("%d\n", a[2] - a[0]);

}

