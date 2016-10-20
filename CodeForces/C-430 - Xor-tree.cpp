// 31th AUG 2016
//codeforces.com/contest/429/problem/A
// DFS: O(N)
// track the LAYER for toggling
#include <iostream>
#include <vector>

using namespace std;
vector<long> v[100002];
vector<long> res;
long a[100002], b[100002];
bool visited[100002] = {false};

void dfs(long n, long layer, long oddCount, long evenCount) {

    if (visited[n])
        return;

    visited[n] = true;

    for (auto i : v[n]) {
        if (layer&1) {
            if ((a[n] == b[n] && oddCount&1)
                || (a[n] != b[n] && !(oddCount&1)) )
            {
                res.push_back(n);
                oddCount++;
            }
        }
        else {
            if ((a[n] == b[n] && evenCount&1)
                || (a[n] != b[n] && !(evenCount&1)) )
            {
                res.push_back(n);
                evenCount++;
            }
        }
        dfs(i, layer+1, oddCount, evenCount);
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

    dfs(1, 0, 0, 0);

    cout << res.size() << '\n';;
    for (auto i : res)
        cout << i << '\n';

}


