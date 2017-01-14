// 11th JAN 2017
//codeforces.com/problemset/problem/427/C
// KosarajuSCC: O(n+m)

#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;
typedef long long i64;

const i64 mod = 1000000007;
const int N = 100008;
vector<long> v[N], t[N], order;
bool visited[N];
i64 costs[N];

int n, m;
i64 minCost, minCount;

void dfs(long n) {
    visited[n] = 1;
    for (auto i : v[n]) {
        if (!visited[i])
            dfs(i);
    }
    order.push_back(n);
}

void kosarajuScc(long n) {
    visited[n] = 1;
    for (auto i : t[n]) {
        if (!visited[i])
            kosarajuScc(i);
    }

    if (minCost > costs[n]) {
        minCost = costs[n];
        minCount = 1;
    }
    else if (minCost == costs[n])
        minCount++;

}


int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", costs+i);
    scanf("%d", &m);
    for (int x,y, i = 1; i <= m; ++i) {
        scanf("%d%d", &x,&y);
        v[x].push_back(y);
        t[y].push_back(x);
    }

    // obtaining order
    for (int i = 1; i <= n; ++i) {
        if (!visited[i])
            dfs(i);
    }

    memset(visited, 0, sizeof(visited));
    i64 total = 0;
    i64 ways = 1;
    for (int i = n-1; i >= 0; --i) {

        if (visited[order[i]]) continue;

        minCost = mod;
        minCount = 1;

        kosarajuScc(order[i]);

        total += minCost;
        ways = (ways * minCount)%mod;

    }

    printf("%I64d %I64d", total, ways);

}



