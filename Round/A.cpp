// 20th NOV 2016
//codeforces.com/contest/738/problem/A
// two pointers: O(|s|)

#include <cstdio>

using namespace std;

char s[108];

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n; ++i) {

        if (s[i] != 'o') {
            printf("%c", s[i]);
            continue;
        }

        int j = i;
        while (s[j+1] == 'g' && s[j+2] == 'o')
            j += 2;

        if (j > i) {  // processed
            i = j;
            printf("***");
        } else
            printf("%c", s[i]);


    }

}



