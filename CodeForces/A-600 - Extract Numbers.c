#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define X 100000

int main() {
    char s[X] = {'a', 'b', 'a', ',', '1', '2', '3' ,';','1','a',';','0', '\0'};
    printf("%s\n", s);
    char a[X], b[X], c[X];
    int isLetter = 0;
    int j = 0, k = 0, l = 0;

//    printf("%c", s[j]);
    while (s[j] != '\0') {
        int i = 0;
        while (s[j] != ';') {
//            if ((c[i] >= 97 && c[i] <= 122)
//                || (c[i] >= 65 && c[i] <= 90)
//                || c[i] == 46 ) {
//                isLetter = 1;
//            }
            c[i++] = s[j++];
        }
        printf(" %c", s[j]);
        j++;
    }



}
