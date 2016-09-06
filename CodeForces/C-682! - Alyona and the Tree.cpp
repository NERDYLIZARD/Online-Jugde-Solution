// 05th SEP 2016
//codeforces.com/contest/682/problem/C
// failed to understand the question,
    // jump into implementation assuming that it's
        //complex and required advance data structures e.g, dp
// naive: O(n^2)
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

vector<long> t[100008];
ll a[100008];
ll c[100008];
bool cut[100008];
long cnt;

long dfsCount(long n, long p) {
    int cnt = 0;
    for (auto i : t[n])
        if (i != p && !cut[i])
            cnt += dfsCount(i, n);
    return cnt + 1;
}

void dfsEach(long n, long p, ll w) {
    w += c[n];
    if (w > a[n]) {
        cut[n] = true;
        cnt += dfsCount(n, p);
        return;
    }
    for (auto i : t[n])
        if (i != p && !cut[i])
            dfsEach(i, n, w);
}

void dfs(long n, long p) {
    dfsEach(n, p, 0);
    for (auto i : t[n])
        if (i != p && !cut[i])
            dfs(i, n);

}

int main() {
    long n; cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    long x;
    ll y;
    for (int i = 2; i <= n; ++i) {
        cin >> x >> y;
        t[i].push_back(x);
        t[x].push_back(i);
        c[i] = y;
    }

    dfs(1, 0);
    cout << cnt;

}




