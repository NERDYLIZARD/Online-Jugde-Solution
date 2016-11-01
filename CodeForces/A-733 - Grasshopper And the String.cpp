// 01st NOV 2016
//codeforces.com/problemset/problem/733/A
// impl: O(|s|)

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char s[108];

int main()
{
    scanf("%s", s+1);
    int n = strlen(s+1);
    s[n+1] = 'E';

    int ans = 0, cur = 0;
    for (int i = 1; i <= n+1; ++i) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {

            ans = max(ans, i - cur);
            cur = i;
        }

    }

    printf("%d", ans);

}

