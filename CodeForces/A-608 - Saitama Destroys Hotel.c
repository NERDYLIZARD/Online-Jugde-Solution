#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
//    int n = 3, f = 7;
//    int ifloor[3] = {2, 3, 5};
//    int itime[3] = {1, 8, 2};

//    int n = 5, f = 10;
//    int ifloor[5] = {2, 3, 8, 9, 10};
//    int itime[5] = {77, 33, 21, 12, 64};

    int i = 0;
    int n, f;
    scanf("%d %d", &n, &f);
    int ifloor[n];
    int itime[n];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &ifloor[i], &itime[i]);
    }

    int curtime = 0;

    for (i = n - 1; i >= 0; i--) {
        curtime += f - ifloor[i] ;
        int wait = 0;
        if (itime[i] > curtime) {
            wait = itime[i] - curtime;
        }
        curtime += wait;
        f = ifloor[i];
    }
    curtime += f;
    printf("%d", curtime);


}



