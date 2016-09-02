#include <iostream>
#include <list>

using namespace std;

list<long> t[100008];
long a[100008];
long c[100008];
bool x[100008];
long cnt;

long dfsCount(long n, long p) {
    int cnt = 0;
    for (auto i : t[n])
        if (i != p)
            cnt += dfsCount(i, n);
    return 1;

}

void dfsEach(long n, long p, long w) {
    w += c[n];
    if (w > a[n]) {
        x[n] = true;
        cnt += dfsCount(n, p);
    }
    for (auto i : t[n])
        if (i != p && !x[i])
            dfsEach(i, n, w);
}

void dfs(long n, long p) {

    for (auto i : t[n])
        if (i != p && !x[i])
            dfsEach(i, n, 0);

    for (auto i : t[n])
        if (i != p && !x[i])
            dfs(i, n);

}


int main() {
    long n; cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    long x, y;
    for (int i = 2; i <= n; ++i) {
        cin >> x >> y;
        t[i].push_back(x);
        t[x].push_back(i);
        c[i] = y;
    }
    dfs(1, 0);
    cout << cnt;

}




