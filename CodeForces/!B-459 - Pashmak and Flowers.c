#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
//    long n = 5;
//    long a[5] = {3, 1, 2, 3, 1};
    long i, j, k;
    long n;
    scanf("%ld", &n);
    long a[n];
    for (i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }
//    long n = 2;
//    long a[2] = {1, 2};

    long max = 0;
    long min = 1000000001;
    for (i = 0; i < n; i++) {
        max = max < a[i] ? a[i] : max;
        min = min > a[i] ? a[i] : min;
    }
//    printf("min %ld max %ld\n", min, max);
//    printf("%d ", min);
//    printf("%d", max);
//    printf("\n\n");
    long diff = max - min;
    long com;
    if (max == min) {
        com = n * (n - 1) /2;
    } else {
        long head = 0;
        long tail = 0;
        for (i = 0; i < n; i++) {
            head += (a[i] == min);
            tail += (a[i] == max);
        }
//        printf("head %d tail %d\n", head, tail);

        com = head * tail;
    }

    printf("%ld %ld", diff, com);



}



