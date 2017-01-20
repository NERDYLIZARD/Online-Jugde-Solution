#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <cmath>

// gcd: O(nlog(m))  / m - limit of input i.e 10^5
// avoid gcd(a,b) = 1 that is coprime - numbers that don't have common prime factors
    // so, we count the prime factor of input
    // output the most common prime factor.

using namespace std;

unordered_map<int,int> factor;

int main()
{
    int n; scanf("%d", &n);

    while(n--) {
        int strength;
        scanf("%d", &strength);

        // find prime factor
        int root = sqrt(strength);
        for (int i = 2; i <= root; ++i) {
            if (strength%i == 0)
                factor[i]++;
            while (strength%i == 0)
                strength /= i;
        }
        // prime
        if (strength > 1)
            factor[strength]++;

    }

    int ans = 1;
    for (auto i : factor)
        ans = max(ans, i.second);

    printf("%d", ans);

}



