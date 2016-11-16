#include <cstdio>
#include <cmath>

using namespace std;

int a[408][408];

int main()
{
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);

        for (int i = 2; i < n+2; ++i) {
            int temp = n;
            for (int j = i; j < n+i; ++j)
                a[i%n][j%n] = temp--;
        }

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

    }

}
