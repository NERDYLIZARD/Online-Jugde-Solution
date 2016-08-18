#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
//    int n = 3;
//    int a[3] = {50, 50, 100};
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    double sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    sum = sum / n;
    printf("%.12f", sum);

}



