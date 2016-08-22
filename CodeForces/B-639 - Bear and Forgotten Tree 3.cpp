//codeforces.com/problemset/problem/639/B
#include <iostream>

using namespace std;

int main() {
    long n, d, h;
    cin >> n >> d >> h;
    if (d > 2*h ||
        (n == 2 && d != 1) ||
        (n == 3 && d != 2) ||
        (n >= 4 && d < 2))
    {
        cout << "-1\n";
        return 0;
    }

    d++; h++;
    int i = 1, j = i + 1;
    while (j <= h) {
        cout << i << ' ' << j << '\n';
        i = j;
        j++;
    }

    i--;
    int hr = d - h;
    while (j < n - hr + 1) {
        cout << i << ' ' << j << '\n';
        j++;
    }

    i = 1;
    while (j <= n) {
        cout << i << ' ' << j << '\n';
        i = j;
        j++;
    }

}


