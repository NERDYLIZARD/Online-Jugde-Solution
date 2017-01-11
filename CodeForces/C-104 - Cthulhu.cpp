// 10th JAN 2016
//codeforces.com/contest/104/problem/C
// DSU: O(MlogN)
    // logN : path compression DSU

// can optimized with DFS to check for multiple
    //unconnected graphs with cycle: O(n+m)
// OR: O(m) with DSU with Union rank and Path compression

#include <cstdio>

using namespace std;

const int N = 108;

int parent[N];
int findd(int x) { return parent[x] = (x == parent[x] ? x : findd(parent[x])); }
void join(int x, int y) { parent[findd(x)] = findd(y); }

int n, m;

int main()
{
    scanf("%d%d", &n,&m);

    // find a connected graph with only one cycle
    // n > m := unconnected graph
    // n < m := more than one cycle
    if (n != m) { puts("NO"); return 0;}

    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    int cycles = 0;
    for (int a,b, i = 1; i <= m; ++i) {
        scanf("%d%d", &a,&b);
        if (findd(a) == findd(b))
            cycles++;
        join(a, b);
    }

    if (cycles == 1) puts("FHTAGN!");
    else puts("NO");


}



