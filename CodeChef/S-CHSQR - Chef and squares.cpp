// 17th NOV 2016
//www.codechef.com/problems/CHSQR
// impl: O(n)

#include <cstdio>

using namespace std;

int a[408][408];

int main()
{
    int t; scanf("%d", &t);
    while (t--) {

        int n; scanf("%d", &n);

        int mid = (n+1)/2;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                printf("%d ", (mid+j)%n + 1);
            mid++;
            printf("\n");
        }

    }

}


