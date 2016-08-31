#include <iostream>
#include <vector>

using namespace std;
vector<long> v[100002];
vector<long> res;
long a[100002], b[100002];
bool visited[100002] = {false};

void fix(int n, int bit) {
    if (visited[n])
        return;
    visited[n] = true;
    a[n] ^= bit;
    for (auto i : v[n])
        fix(i, !bit);
    visited[n] = false;
}

void dfs(long n) {
    if (visited[n])
        return;

    visited[n] = true;
    if (a[n] == b[n]) {
        for (auto i : v[n]) {
            dfs(i);
        }
    }
    else {
        bool bit = true;
        a[n] ^= bit;
        res.push_back(n);
        for (auto i : v[n])
            fix(i, !bit);
    }
}

int main() {
    long n; cin >> n;
    long x, y;
    for (int i = 1; i < n; ++i) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];

    for (int i = 1; i <= n; ++i)
        dfs(i);

    cout << res.size() << '\n';;
    for (auto i : res)
        cout << i << '\n';



}


