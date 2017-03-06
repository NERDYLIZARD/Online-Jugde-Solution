// 31st JAN 2017
//codeforces.com/contest/761/problem/A
// impl: O(1)
    // edge cases

#include <cstdio>
#include <algorithm>

using namespace std;


int main()
{
    int a,b;
    scanf("%d%d", &a,&b);

    if (abs(a-b) <= 1 && a+b > 0) puts("YES");
    else puts("NO");

}



