// 20th OCT 2016
//codeforces.com/contest/724/problem/B
// implementation: O(m*n)

#include <cstdio>
#include <algorithm>

using namespace std;

int n, m;
int a[28][28];

bool check() {
    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        for (int j = 1; j <= m; ++j)
            cnt += (a[i][j] != j);
        if (cnt > 2) return 0;
    }
    return 1;

}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            scanf("%d", &a[i][j]);

    for (int i = 1; i <= m; ++i) {
        for (int j = i; j <= m; ++j) {

            for (int k = 1; k <= n; ++k)
                swap(a[k][i], a[k][j]);

                if (check()) {
                    puts("YES");
                    return 0;
                }

            for (int k = 1; k <= n; ++k)
                swap(a[k][i], a[k][j]);

        }
    }
    puts("NO");

}

