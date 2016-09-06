// 05th SEP 2016
//codeforces.com/contest/682/problem/C
// Observation: sub-paths of satisfied path are satisfied
    // dfs once from root
// dfs: O(n)
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

vector<pair<long, ll>> t[100008];
ll a[100008];
long cnt;

void dfs(long n, ll w) {
    if (w > a[n])
        return;
    cnt++;
    for (auto i : t[n])
        dfs(i.first, max(w+i.second, 0LL));

}

int main() {
    long n; cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    long x; ll y;
    for (int i = 2; i <= n; ++i) {
        cin >> x >> y;
        // i is non repeated i.e, leaves
            // no need of alternative push_back
        t[x].push_back(make_pair(i, y));
    }

    dfs(1, 0);
    cout << n - cnt;

}




