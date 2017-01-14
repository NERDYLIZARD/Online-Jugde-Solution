#include <cstdio>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n==2) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    set<int> a;

    for (int x, i = 0; i < n; ++i) {
        scanf("%d", &x);
        a.insert(x);
    }

    if (a.size() == 1) {
        puts("1");
        return 0;
    }

    int composite = 0;
    for (int i : a) {
        if (!isPrime(i)) {
            printf("%d, ", i);
            composite++;
        }
    }

    printf("%d", composite);

}



