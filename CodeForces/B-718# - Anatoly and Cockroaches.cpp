// 25th SEPT 2016
//codeforces.com/contest/719/problem/B
// Greedy: O(n)
    // what a code
    // conditioning

#include <cstdio>
#include <algorithm>

using namespace std;
char s[100008];
long n;

long misplace(char p) {
    long miss[2] = {0, 0};
    for (int i = 0; i < n; ++i)
        if (s[i]==p != (i&1))
            miss[i&1]++;

    return max(miss[0], miss[1]);
}

int main()
{
    scanf("%d%s", &n, s);
    printf("%d\n", min(misplace('r'), misplace('b')) );

}

