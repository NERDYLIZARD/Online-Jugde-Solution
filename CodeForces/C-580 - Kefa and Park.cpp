#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

map<long, vector<long>> mapp;
long a[100001];
long n, m;
long cnt;

void dfs(long i, long track, long parent) {
    if (a[i]) {
        track++;
    } else {
        track = 0;
    }
    if (track > m) {
        return;
    }
    if (mapp[i].size() == 1 && i != parent) {
        cnt++;
        return;
    }
//    for(auto it = mapp[i].begin(); it != mapp[i].end(); ++it) {
    for (auto it : mapp[i]) {
        if (it != parent)
            dfs(it, track, i);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    long x, y;
    for (int i = 1; i <= n - 1; ++i) {
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }

    dfs(1, 0, 1);
    cout << cnt;
}

