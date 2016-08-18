#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ;
    for (n = 0; n < 40; n++) {
        if (n & 1)
            printf("%d - odd\n", n);
        else
            printf("%d - even\n", n);
    }
}



