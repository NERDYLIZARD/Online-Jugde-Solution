// 27 AUG 2016
// codeforces.com/problemset/problem/339/D
    // implementation: O(m*n) O'(2^n)
    // create pow of 2 table for looking up
        // so that no need to compute 2^i, just num[i]
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long m, p, b;
    cin >> n >> m;
    long num[n];
    vector<long> v[n+1];

    num[0] = 1;
    for (int i = 1; i <= n; ++i) {
        num[i] = 2 * num[i-1];
    }

    long temp;
    for (int i = 0; i < num[n]; ++i) {
        cin >> temp;
        v[n].push_back(temp);
    }

    bool toggle = true;
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < num[i]; j++) {
            if (toggle)
                v[i].push_back(v[i+1][j*2] | v[i+1][j*2+1]);
            else
                v[i].push_back(v[i+1][j*2] ^ v[i+1][j*2+1]);
        }
        toggle = !toggle;
    }

    while(m--) {
        cin >> p >> b;
        --p;
        // trivial optimization
        if (v[n][p] == b) {
            cout << v[0][0] << '\n';
            continue;
        }

        v[n][p] = b;

        toggle = true;
        for (int i = n-1; i >= 0; --i) {
            p /= 2;
            if (toggle)
                v[i][p] = v[i+1][p*2] | v[i+1][p*2+1];
            else
                v[i][p] = v[i+1][p*2] ^ v[i+1][p*2+1];

            toggle = !toggle;
        }
        cout << v[0][0] << '\n';
    }

}


