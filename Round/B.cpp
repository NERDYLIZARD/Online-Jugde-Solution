#include <cstdio>
#include <algorithm>

using namespace std;

int arr[28][28];
int n, m;

int main()
{
    scanf("%d%d", &n,&m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int standard = 2;
    int i, j;
    for (i = 1; i <= m; ++i) {
        int track = 0;
        for (j = 1; j <= n; ++j) {
            track += arr[j][i];
        }
        if ((track % arr[1][i]) == 0) {
            standard = 3;
            break;
        }
    }

    for (i = 1; i <= n; ++i) {
        int cnt = 0;
        for (j = 1; j <= m; ++j) {
            if (arr[i][j] != j)
                cnt++;
        }
        if (cnt > standard) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");

}

