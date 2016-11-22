// 18th NOV 2016
//codeforces.com/contest/716/problem/B
// two pointers: O(|s|)

#include <cstdio>
#include <vector>

using namespace std;

int cnt[26];
char s[50008];

int main()
{
    scanf("%s", s);

    int i = 0, j = 0;
    for (; s[j] != '\0'; ++j) {

        if (j-i+1 > 26) break;
        if (s[j] == '?') continue;

        if (!cnt[s[j]-'A'])
            cnt[s[j]-'A']++;
        else {
            while (s[i] != s[j]) {
                cnt[s[i]-'A']--;
                i++;
            }
            i++;
        }
    }

    j--;
    if (j-i+1 < 26)
        puts("-1");
    else {
        vector<char> v;
        for (int k = 0; k < 26; ++k)
            if (!cnt[k]) v.push_back(k +'A');

        int k = 0;
        while (i <= j) {
            if (s[i] == '?')
                s[i] = v[k++];
            i++;
        }

        for (int i = 0; s[i] != '\0'; ++i)
            if (s[i] == '?')
                printf("A");
            else
                printf("%c", s[i]);

    }

}


