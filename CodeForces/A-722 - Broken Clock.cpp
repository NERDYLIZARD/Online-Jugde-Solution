// 01st OCT 2016
//codeforces.com/contest/722/problem/A
// impl: O(n)

#include <cstdio>

using namespace std;

int n, hh, mm;
int a[5];

int main()
{
    scanf("%d%d:%d", &n, &hh, &mm);

    a[0] = hh / 10;
    a[1] = hh % 10;
    a[3] = mm / 10;
    a[4] = mm % 10;

    if (n == 12) {
        if (hh > 12) {
            if (a[1] == 0)
                a[0] = 1;
            else
                a[0] = 0;
        }
        if (a[0] == 0 && a[1] == 0)
            a[1] = 1;
    }

    if (n == 24 && hh > 23) a[0] = 1;
    if (mm > 59) a[3] = 0;


    for (int i = 0; i < 5; ++i) {
        if (i == 2) printf(":");
        else printf("%d", a[i]);
    }

}

