#include <cstdio>
#include <algorithm>

// gcd: O(n)
// avoid gcd(a,b) = 1 that is coprime - numbers that don't have common prime factors
    // so, we count the prime factor of input
    // output the most common prime factor.

// n/2 + n/3 + n/4 + . . + 2 + 1 + 1 + . . + 1
                                // (+1) n/2 time
// n/2 + n/2 + n/3 + n/4 + . .
// n + n/3 + n/4 + . .
// n + n
// O(n)

using namespace std;

const int N = 100008;
int cnt[N];

int main()
{
    int n; scanf("%d", &n);
    int s;
    while(n--) {
        scanf("%d", &s);
        cnt[s]++;
    }

    long ans = 1;
    for (int i = 2; i < N; ++i) {
        long cntFactor = 0;
        for (int j = i; j < N; j+=i)
            cntFactor += cnt[j];
        ans = max(ans, cntFactor);
    }

    printf("%d", ans);

}



