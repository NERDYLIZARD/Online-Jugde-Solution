#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long x = 1234;
    while (x / 10 > 0) {
        int temp = x % 10;
        x /= 10;
        printf("%d", temp);
    }
}
