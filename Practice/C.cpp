#include <cstdio>

using namespace std;

const long long INF = 1008;
const long long mod = 1e9+7;

long long fact[INF];

int main()
{
    fact[1] = 1;
    for (int i = 2; i < INF; ++i)
        fact[i] = (fact[i-1] * i) % mod;


    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);

        long long cnt = 0;
        for (int i = 3; i <= n; ++i) {
            cnt += ((i-2) * fact[i-1]) % mod;
        }

        printf("%lld\n", cnt);
    }

}



