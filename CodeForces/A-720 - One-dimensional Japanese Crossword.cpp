// 30th SEPT 2016
//codeforces.com/contest/721/problem/A
// impl: O(n)

#include <cstdio>
#include <vector>

using namespace std;

char s[108];
vector<int> v;

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s);

    s[n] = 'W';
    int cnt = 0;
    for (int i = 0; i <= n; ++i) {
        if (s[i] == 'B')
            cnt++;
        else {
            if (cnt > 0) {
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }

    printf("%d\n", v.size());
    for (auto i : v)
        printf("%d ", i);

}

