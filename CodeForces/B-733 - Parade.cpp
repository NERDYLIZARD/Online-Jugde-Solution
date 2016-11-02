// 01st NOV 2016
//codeforces.com/problemset/problem/733/B
// math: O(n)

#include <cstdio>
#include <cmath>

using namespace std;

int left[100008];
int right[100008];

int main()
{
    int n;
    scanf("%d", &n);

    int L = 0, R = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &left[i], &right[i]);
        L += left[i];
        R += right[i];
    }

    int beauty = abs(L - R);
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        int l = L - left[i] + right[i];
        int r = R - right[i] + left[i];
        if (abs(l - r) > beauty) {
            beauty = abs(l-r);
            ans = i;
        }
    }

    printf("%d", ans);

}
