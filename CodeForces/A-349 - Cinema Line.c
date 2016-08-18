#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
//    long n = 4;
//    long arr[4] = {25, 25, 50, 50};
    int n;
    scanf("%d", &n);
    int arr[n];

    int a = 0, b = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 25) {
            a++;
        }

        else if (arr[i] == 50) {
            if (a >= 1) {
                a--;
                b++;
            } else {
                printf("NO");
                break;
            }
        }

        else if (arr[i] == 100) {
            if (a >= 1 && b >= 1) {
                a--;
                b--;
            } else if (a >= 3) {
                a -= 3;
            } else {
                printf("NO");
                break;
            }
        }

    }

    if (i == n) {
        printf("YES");
    }


}



