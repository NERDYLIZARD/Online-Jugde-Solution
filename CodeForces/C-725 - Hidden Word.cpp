// 25th OCT 2016
//codeforces.com/contest/725/problem/C
// impl: O(|s|)

#include <cstdio>

using namespace std;

char s[27];
char ans[26];

int main()
{
    scanf("%s", s);
    int duplicants[2];

    for (int i = 0; i < 26; ++i) {
        for (int j = i+1; j < 27; ++j) {
            if ((s[i] ^ s[j]) == 0) {
                duplicants[0] = i;
                duplicants[1] = j;
                break;
            }
        }
    }

    if (duplicants[1] - duplicants[0] == 1) {
        puts("Impossible"); return 0;
    }

    int len = duplicants[1] - duplicants[0];
    int loopEnd = 12 + len/2;

    int loopBeg = loopEnd;
    for (int i = loopEnd, j = duplicants[1]-1;
            s[j] != s[duplicants[0]]; --i, --j) {
        ans[i] = s[j];
        loopBeg--;
    }

    for (int i = loopBeg, j = duplicants[0];
            j >= 0; --i, --j)
        ans[(i<0)? i+26 :i] = s[j];


    for (int i = loopEnd+1, j = duplicants[1]+1;
            j < 27; ++i, ++j)
        ans[i%26] = s[j];


    for (int i = 0; i < 13; ++i) printf("%c", ans[i]);
    printf("\n");
    for (int i = 25; i >= 13; --i) printf("%c", ans[i]);


}



