// 18th SEPT 2016
//codeforces.com/contest/716/problem/A
// implementation: O(N)
#include <iostream>

using namespace std;

int main()
{
    long n;
    long long c;
    cin >> n >> c;
    long t[n+1];

    for (int i = 1; i <= n; ++i)
        cin >> t[i];

    long long cnt = 1;
    for (int i = n-1; i >= 1; --i) {
        if (t[i+1] - t[i] <= c)
            cnt++;
        else
            break;
    }
    cout << cnt;
}

