// 13th SEP 2016
//codeforces.com/contest/504/problem/A
// Queue: O(N)
    // construct tree from leaves i,e degree = 1
    // init: enqueue leaves
    // dequeue until finding a new node with degree = 1, enqueue it
    // ignore nodes with degree = 0 (last node)
    // until q is empty
    // each dequeue yields an answer edge

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<long, long>> t;
vector<pair<long, long>> ans;
queue<long> q;

int main() {
    long n; cin >> n;
    long x, y;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        t.push_back(make_pair(x, y));
        if (x == 1)
            q.push(i);
    }

    while (!q.empty()) {
        long cur = q.front();
        q.pop();
        if (t[cur].first > 0) {
            long adj = t[cur].second;
            ans.push_back(make_pair(cur, adj));

            t[adj].first--;
            t[adj].second ^= cur;

            if(t[adj].first == 1)
                q.push(adj);
        }
    }

    cout << ans.size() << '\n';
    for (auto i : ans) {
        cout << i.first << ' ' << i.second << '\n';
    }

}




