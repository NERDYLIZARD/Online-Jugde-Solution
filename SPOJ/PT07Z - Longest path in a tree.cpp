// www.spoj.com/problems/PT07Z/
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

map<int, vector<int>> mapp;
bool visited[10001] = {false};
int findDiameter(int);
int total;


int main() {
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i < n; ++i) {
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }

    findDiameter(1);
    cout << total << endl;

    return 0;
}

int findDiameter(int n) {
    visited[n] = true;
    int mx = -1, secMx = -1;
    for (auto it : mapp[n]) {
        if (!visited[it]) {
            int temp = findDiameter(it);
            if (mx <= temp) {
                secMx = mx;
                mx = temp;
            }
            else if (secMx < temp) {
                secMx = temp;
            }
        }
    }
    total = max(total, mx + secMx + 2);
    return mx + 1;

}


