// 11th SEP 2016
//codeforces.com/problemset/problem/712/A
// Implementation: O(N)

#include <iostream>

using namespace std;

long long a[100008], b[100008];

int main()
{
    long n; cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = n; i >= 0; --i)
        b[i] = a[i] + a[i+1];

    for (int i = 1; i <= n; ++i)
        cout << b[i] << ' ';

}

