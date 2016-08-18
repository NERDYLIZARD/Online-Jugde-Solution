#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int i, j, k, l;
//    int n = 5;
    int n;
    scanf("%d", &n);
    int m = (n + 1) / 2;
    int space, star;

//    int m = 2 * n - 1;
    for (i = 1; i <= n; i++) {
        if (i <= m) {
            space = m - i;
            star = 2 * i - 1;
        } else {
            space = i % m;
            star = 2 * m - 1 - 2 * (i % m);
        }

        for (j = 1; j <= space; j++) {
            printf("*");
        }
        for (k = 1; k <= star; k++) {
            printf("D");
        }
        for (l = 1; l <= space; l++) {
            printf("*");

        }
        printf("\n");

    }

}



