#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 1 3 5 15 13 18  11
int main() {
//    int n = 1;
    int n = 100;
    int i;

    int temp = n;


    while (temp % 3 != 0) {
        temp -= 5;
    }

    if (temp >= 0) {
        for (i = 1; i <= temp; i++)
            printf("5");
        for (i = temp + 1; i <= n; i++)
            printf("3");
        printf("\n");
    }
    else {
        printf("-1\n");
    }
}   // test




