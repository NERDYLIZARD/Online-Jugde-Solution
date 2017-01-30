// 30th JAN 2017
//codeforces.com/contest/758/problem/C
// maths: O(1)

#include <cstdio>
#include <algorithm>

using namespace std;

int n, m, x, y;
long long k;

long long f(int x, int y) {
    if (n==1) {
        return k/m + (k%m >= y);
    }

    long long t = n*m + (n-2)*m;
    long long total = k/t;
    int remaining = k%t;
    int index = (x-1)*m + y;

    if (x==1 || x==n)
        return total + (index <= remaining);
    else
        return 2*total + (index <= remaining)
                + ( (m*n + (n-x-1)*m + y) <= remaining);
}


int main()
{
    scanf("%d %d %I64d %d %d", &n,&m,&k,&x,&y);

    printf("%I64d %I64d %I64d",
           max(max(f(1,1), f(2,1)), f(n-1,1)),
           f(n, m),
           f(x, y));

}



