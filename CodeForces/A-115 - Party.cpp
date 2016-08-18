#include <iostream>
#include <limits>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;
void traverse(int);

    vector<int> trees;
    map<int, vector<int> > nodes;
    int cnt, track;

//        1           5
//      2   4
//    3

int main() {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] == -1)
            trees.push_back(i);
        else
            nodes[a[i]].push_back(i);
    }

    for (auto i = trees.begin(); i != trees.end(); ++i) {
        traverse(*i);
        ans = max(track, ans);
        track = 0;
    }

    cout << ans + 1;

}

void traverse(int n) {
    if(nodes[n].empty()) {
        track = max(track, cnt);
        return;
    }

    cnt++;

    for(auto i = nodes[n].begin(); i != nodes[n].end(); ++i) {
        traverse(*i);
    }

    cnt--;
}







