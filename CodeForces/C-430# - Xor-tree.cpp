// 31th AUG 2016
//codeforces.com/contest/429/problem/A
// DFS: O(N)
// actually compute XOR by switching toggle each recursion
    // ELEGANT way to handle toggling
#include <iostream>
#include <vector>

using namespace std;
vector<long> v[100002];
vector<long> res;
long a[100002], b[100002];

void dfs(long cur, long parent, long x, long y) {

    a[cur] ^= x;
    if (a[cur] != b[cur]) {
        res.push_back(cur+1);
        x ^= 1; // toggle
    }
    for (auto child : v[cur]) {
        if (child != parent)
        // switch y, x
            dfs(child, cur, y, x);
    }
}

int main() {
    long n; cin >> n;
    long x, y;
    for (int i = 0; i < n-1; ++i) {
        cin >> x >> y;
        x--; y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    dfs(0, -1, 0, 0);

    cout << res.size() << '\n';;
    for (auto i : res)
        cout << i << '\n';

}


