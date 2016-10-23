// 22nd OCT 2016
//codeforces.com/contest/725/problem/A
// impl: O(n)
#include <cstdio>

using namespace std;

char s[200008];

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s+1);
    s[0] = '<';
    s[n+1] = '>';

    long cnt = 0;
    int i = 1;
    while (s[i++] != '>')
        cnt++;

    i = n;
    while (s[i--] != '<')
        cnt++;

    printf("%I32d\n", cnt);


}


