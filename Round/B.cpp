#include <cstdio>

using namespace std;

int n;
char s[5];
int a[5];

int main()
{
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < 5; ++i) {
        a[i] = s[i] - '0';
    }

    if (10*a[3] + a[4] > 59)
        a[3] = 0;

    int temp = 10*a[0] + a[1];

    if (n == 12) {
        if (temp > 12) {
            if (a[1] == 0)
                a[0] = 1;
            else
                a[0] = 0;
        } else {
            if (a[0] == 0 && a[1] == 0)
                a[1] = 1;
        }
    }

    if (n == 24 && temp > 23)
        a[0] = 1;

    for (int i = 0; i < 5; ++i) {
        if (i != 2)
            printf("%d", a[i]);
        else
            printf(":");
    }

}
