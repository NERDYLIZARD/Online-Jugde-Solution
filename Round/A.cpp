#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    long n; cin >> n;
    long long a[n+1], b[n+1];

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = n; i >=1; --i) {
        b[i] = a[i];
        for (int j = i; j <= n-1; ++j) {
            if (j%2 != i%2)
                b[i] -= b[j+1];
            else
                b[i] += b[j+1];
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << b[i] << ' ';


}

