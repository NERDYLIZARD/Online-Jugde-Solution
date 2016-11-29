// 27th NOV 2016
//codeforces.com/contest/735/problem/A
// impl: O(n)

#include <cstdio>

using namespace std;

char s[108];

int main()
{
    int n, k;
    scanf("%d%d", &n,&k);
    scanf("%s", s);

    int i;
    for (i = 0; s[i] != '\0'; ++i)
        if (s[i] == 'T' || s[i] == 'G')
            break;

    s[i] = '.';
    while ((s[i] != 'G' || s[i] != 'T') && i < n) {
        if (s[i] == '.') i += k;
        else break;
    }

    if (s[i] == 'G' || s[i] == 'T') puts("YES");
    else puts("NO");

}



