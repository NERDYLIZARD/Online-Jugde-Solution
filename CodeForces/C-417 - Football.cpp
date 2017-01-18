// 16th JAN 2017
//codeforces.com/contest/417/problem/C
// implementation: O(n*k)

#include <cstdio>

using namespace std;


int main()
{
    int n, k;
    scanf("%d%d", &n,&k);

    if (n < 2*k + 1) {
        puts("-1");
        return 0;
    }

    printf("%d\n", n*k);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            printf("%d %d\n", i+1, ((i+j)%n)+1);
        }
    }

}



