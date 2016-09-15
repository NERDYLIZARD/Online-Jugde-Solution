// 15th SEPT 2016
//codeforces.com/contest/714/problem/A
// elegant implementation: O(1)

#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    long long r = min(b,d), l = max(a,c);
    long long ans = r - l + 1;

    if (ans < 0)
        ans = 0;
    else
        ans -= (l<=k && k <= r);

    cout << ans;

}

