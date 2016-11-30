// 30th NOV 2016
//www.codechef.com/problems/CPERM
// Exponentiation by squaring + Combinatoric: O(logN)

#include <cstdio>

using namespace std;
const long long mod = 1000000007;

long long power2(long long N){
    if(!N)
        return 1;
    if(N&1){
        long long H=power2((N-1)/2) %mod;
        return H*H*2;
    } else {
        long long H=power2(N/2) % mod;
        return H*H;
    }
}

int main()
{
    int z; scanf("%d", &z);
    while (z--) {

        long long n; scanf("%lld", &n);
        if (n <= 1) puts("0\n");
        else printf("%lld\n", power2(n-1)%mod -2);

    }

}



