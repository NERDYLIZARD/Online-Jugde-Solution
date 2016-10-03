// 03rd OCT 2016
//codeforces.com/contest/723/problem/B
// impl: O(|s|)

#include <cstdio>
#include <algorithm>

using namespace std;

int n;
char s[258];

int main()
{
    scanf("%d", &n);
    scanf("%s", s);

    int maxLen = 0;
    int maxNum = 0;

    int len = 0;
    s[n] = '_';

    for (int i = 0; i <= n; ++i) {
        if (s[i] != '_' && s[i] != '(')
            len++;
        else {
            maxLen = max(maxLen, len);
            len = 0;
            if (s[i] == '(') {
                i++;
                bool num = 0;
                while (s[i] != ')') {
                    if (s[i] == '_') {
                        maxNum += num;
                        num = 0;
                    } else
                        num |= 1;
                    i++;
                }
                maxNum += num;
            }
        }
    }

    printf("%d %d", maxLen, maxNum);

}
