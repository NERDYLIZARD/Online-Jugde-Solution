#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n], c[n];

    int i;
    int j = 0, k;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        c[i] = a[j++];
    }

    int temp;
    for (j = 0; j < n - 1; j++) {
        int flag = 0;   // optimizing the code;
        for (k = 0; k < n - j - 1; k++)   // swapping, go up to (n - j),  -1 because loop starts from 0;
        {
            if (a[k] > a[k+1])     // if the former is greater than the following;
            {
                temp = a[k];            //then swap;
                a[k] = a[k+1];
                a[k+1] = temp;
                flag = 1 ;       // if pass was sorted, flag = 1;
            }
        }
        if(flag == 0) {
            break;
        }
    }
//    for (k = 0; k < n; k++) {
//        printf("%d ", a[k]);
//    }
//    printf("\n");


    int sum = 0, count = 0;
    int b[n];
    j = 0, i = 0;
    while (sum + a[i] <=  d) {
        sum += a[i];
        b[j++] = a[i++];
        count++;
    }

    printf("%d", count);
//    for (j = 0; j < count; j++) {
//        printf("%d ", b[j]);
//    }
    printf("\n");

    for (j = 0; j < count; j++) {
        for (i = 0; i < n; i++) {
            if (c[i] == b[j]) {
                c[i] = 30000;
                b[j] = c[i] + 1;
                k = i;
            }
        }
        printf("%d ", k + 1);
    }


}
