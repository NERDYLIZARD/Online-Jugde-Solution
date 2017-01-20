// 19th JAN 2017
//codeforces.com/contest/758/problem/B
// implementation: O(|s|)
    // nasted index array call

#include <cstdio>

using namespace std;

int cnt[4];
int position[208];
char s[108];

int main()
{
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '!')
            cnt[i%4]++;
        else
            position[s[i]] = i%4;
    }


    printf("%d %d %d %d", cnt[position['R']],
                          cnt[position['B']],
                          cnt[position['Y']],
                          cnt[position['G']]);

}



