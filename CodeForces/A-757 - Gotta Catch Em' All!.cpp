// 13th JAN 2017
//codeforces.com/contest/757/problem/A
// impl: O(|s|*|a|)

#include <cstdio>
#include <algorithm>

using namespace std;

int a[7];
char s[100008];

int main()
{
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 'u') a[0]++;
        if (s[i] == 'a') a[1]++;
        if (s[i] == 'B') a[2]++;
        if (s[i] == 'l') a[3]++;
        if (s[i] == 'b') a[4]++;
        if (s[i] == 's') a[5]++;
        if (s[i] == 'r') a[6]++;
    }

    a[0] /= 2;
    a[1] /= 2;
    sort(a, a+7);

    printf("%d", a[0]);


}



