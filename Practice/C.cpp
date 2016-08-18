#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;
map<int, vector<int> > mapp;
int dfs(int, int);

int main() {
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i < n; ++i) {
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }

    int cnt = 0;
    for (auto it : mapp)
        cnt = max(cnt, dfs(it.first, it.first));
    cout << cnt << '\n';

    return 0;

}

int dfs(int n, int parent) {
    if (mapp[n].size() == 1
        && n != parent)
        return 0;

    for (auto it : mapp[n]) {
        if (it != parent)
            return 1 + dfs(it, n);
    }
}


