#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long i, j, k;
//    long long n = 4;
//    long long poor = 5;
//    long long a[4] = {75, 0, 150, 75};
//    long long b[4] = {5, 100, 20, 1};

//    long long n = 5;
//    long long poor = 100;
//    long long a[5] = {0, 11, 99, 46, 87};
//    long long b[5] = {7, 32, 10, 8, 54};

//    long long n = 5;
//    long long poor = 9;
//    long long a[5] = {0, 2, 8, 5, 3};
//    long long b[5] = {98, 1000000000, 1000000000, 999999999, 989898989};

//    long long n = 4;
//    long long poor = 2;
//    long long a[4] = {10909234, 10909236, 10909237, 10909235};
//    long long b[4] = {9, 8, 10, 98};

    long long n, poor;
    scanf("%lld %lld", &n, &poor);
    long long a[n], b[n];
    for (i = 0; i < n; i++) {
        scanf("%lld %lld", &a[i], &b[i]);
    }
    printf("\n");

    long long temp;
    for (i = 0; i < n - 1; i++)  // passing, go up to n - 1;
    {
        int flag = 0;   // optimizing the code;

        for (j = 0; j < n - i - 1; j++)   // swapping, go up to (n - j),  -1 because loop starts from 0;
        {
            if (a[j] > a[j+1])     // if the former is greater than the following;
            {
                temp = a[j];            //then swap;
                a[j] = a[j+1];
                a[j+1] = temp;

                temp = b[j];            //then swap;
                b[j] = b[j+1];
                b[j+1] = temp;

                flag = 1 ;       // if pass was sorted, flag = 1;
            }
        }
        if(!flag) break;
    }

//    for (i = 0; i < n; i++) {      //printing the ascending order;
//        printf("%lld ", a[i]);
//    }
//    printf("\n");
//    for (i = 0; i < n; i++) {      //printing the ascending order;
//        printf("%lld ", b[i]);
//    }
//    printf("\n");

    long long ans = 0;
    for (i = 0; i < n; i++) {
        long long count = 0;
        for (j = i; j < n; j++) {
            if (a[j] - a[i] < poor) {
                count += b[j];
            } else {
                break;
            }
        }
        for (k = i; k >=0; k--) {
            if (a[i] - a[k] < poor) {
                count += b[k];
            } else {
                break;
            }
        }
        j--;
        k++;

        while (abs(a[j] - a[k]) >= poor) {
            if (b[j] < b[k]) {
                count -= b[j];
                j--;
            } else {
                count -= b[k];
                k++;
            }
        }


        count -= b[i];     // subtract itself once;
        if (ans < count) {
            ans = count;
        }
    }
    printf("%lld", ans);


}



