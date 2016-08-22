//codeforces.com/problemset/problem/639/B
#include <iostream>
#include <vector>

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

    vector<long> v[n+1];

    d++; h++;
    int i = 1, j = i + 1;
    while (j <= h) {
        v[i].push_back(j);
        i = j;
        j++;
    }

    i--;
    int hr = d - h;
    while (j < n - hr + 1) {
        v[i].push_back(j);
        j++;
    }

    i = 1;
    while (j <= n) {
        v[i].push_back(j);
        i = j;
        j++;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            cout << i << ' ' << v[i][j] << '\n';
        }
    }

}


