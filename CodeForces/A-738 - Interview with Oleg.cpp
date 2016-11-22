// 20th NOV 2016
//codeforces.com/contest/738/problem/A
// impl: O(|s|)

#include <cstdio>

using namespace std;

char s[108];

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n; ++i) {

        while (s[i]=='o' && s[i+1]=='g' &&s[i+2]=='o') {
            i += 3;
            while (s[i]=='g' && s[i+1]=='o')
                i += 2;
            printf("***");
        }

        if (i < n)
            printf("%c", s[i]);

    }

}



