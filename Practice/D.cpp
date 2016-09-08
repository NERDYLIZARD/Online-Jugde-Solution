#include <iostream>
#include <vector>

using namespace std;
vector<long> t[50008];
int k;
long cnt;

void dfsCount(int n, int p, int track, int root) {

    if (track == k) {
        cnt++;
        return ;
    }

    for (auto i : t[n])
        if (i != p)
            dfsCount(i, n, track+1, root);

}


void dfs(int n, int p) {
    dfsCount(n, -1, 0, n);
    for (auto i : t[n])
        if (i != p)
            dfs(i, n);
}

int main() {
    long n; cin >> n;
    cin >> k;
    long x, y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        t[x].push_back(y);
        t[y].push_back(x);
    }

    dfs(1, 0);
    cout << cnt/2;

}




