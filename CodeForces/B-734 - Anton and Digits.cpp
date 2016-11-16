// 15th NOV 2016
//codeforces.com/contest/734/problem/B
// impl: O(1)

#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long two, three, five, six;
    scanf("%d%d%d%d", &two,&three,&five,&six);

    long long ans = 0;

    ans += min(two, min(five, six)) * 256;
    two -= min(two, min(five, six));
    ans += min(two, three) * 32;

    printf("%I64d", ans);

}


