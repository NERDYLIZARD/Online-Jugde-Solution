#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    long l = 1, r = 1000000;
    while (l != r) {
        long mid = (l + r + 1) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        char input[3];
        scanf("%s", input);

        if (strcmp(input, "<") == 0)
            r = mid-1;
        else
            l = mid;
    }

    printf("! %d\n", l);
    fflush(stdout);


}


