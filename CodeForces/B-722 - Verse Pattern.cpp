// 01st OCT 2016
//codeforces.com/contest/722/problem/B
// impl: O(n)

#include <cstdio>

using namespace std;

char s[108][108];
int n;
int p[108];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d ", p+i);

    int i;
    for (i = 0; i < n; ++i) {
        gets(s[i]);
        for (char x : s[i])
            if (x == 'a' || x == 'e'
                ||x == 'i' ||x == 'o'
                 ||x == 'u' ||x == 'y')
                p[i]--;

        if (p[i]) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");

}

