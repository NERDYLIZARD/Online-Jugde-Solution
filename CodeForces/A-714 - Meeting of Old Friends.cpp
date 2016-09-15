// 15th SEPT 2016
//codeforces.com/contest/714/problem/A
// inelegant implementation: O(1)

#include <iostream>

using namespace std;

int main()
{
    long long a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    long long l, r;
    if (c > b || d < a) {
        cout << 0;
        return 0;
    }

    if (c <= a || d >= b) {
        if (d < b) {
            l = a;
            r = d;
        } else if (c > a) {
            l = c;
            r = b;
        }
        else {
            l = a;
            r = b;
        }
    }
    else {
        if (a > c) {
            l = a;
            r = b;
        } else {
            l = c;
            r = d;
        }
    }

    cout << r - l + 1 - (l <= k && k <= r);

}

