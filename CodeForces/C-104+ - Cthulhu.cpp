// 12th JAN 2016
//codeforces.com/contest/104/problem/C
// Connected Component (DFS): O(n+m)

#include <cstdio>
#include <vector>

using namespace std;

int n, m;
vector<int> edges[108];
bool visited[108];

void dfs(int n) {
    visited[n] = 1;
    for (auto i : edges[n]) {
        if (!visited[i])
            dfs(i);
    }
}

int main()
{
    scanf("%d%d", &n,&m);

    // find a connected graph with only one cycle
    // n > m := unconnected graph
    // n < m := more than one cycle
    if (n != m) { puts("NO"); return 0;}

    for (int a,b, i = 1; i <= m; ++i) {
        scanf("%d%d", &a,&b);
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    int cycles = 0;
    for (int i = 1; i <= m; ++i) {
        if (!visited[i]) {
            cycles++;
            dfs(i);
        }
    }

    if (cycles == 1) puts("FHTAGN!");
    else puts("NO");


}



