#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;
map<int, vector<int>> mapp;
int findDepth(int, int, int);
int omit;

int main() {
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i < n; ++i) {
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }


    int cnt = findDepth(1, 1, 1);
    int cnt2 = findDepth(1, 1, 1);

    cout << cnt + cnt2 - 2 << endl;

    return 0;

}

int findDepth(int n, int parent, int root) {
    if (mapp[n].size() == 1
        && n != parent)
        return 1;

    int mx = 0;
    for (auto it : mapp[n]) {
        if (it != parent) {
            if (it == omit) continue;
            int temp = findDepth(it, n, root);

            if (n == root) {
                if (mx <= temp) {
                    mx = temp;
                    omit = it;
                }
            }
            else {
                mx = max(mx, temp);
            }
        }

    }

    return mx + 1;

}


