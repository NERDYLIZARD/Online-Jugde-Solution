// 15th NOV 2016
//codeforces.com/contest/734/problem/A
// impl: O(n)

#include <cstdio>

using namespace std;

char s[100000];

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s);

    int a = 0, d = 0;
    for (char c : s) {
        a += (c == 'A');
        d += (c == 'D');
    }

    if (a > d) puts("Anton");
    else if (a < d) puts("Danik");
    else puts("Friendship");

}



