#include <bits/stdc++.h>
#define INF 1000000007
using namespace std;
typedef pair<int,int> ii;

vector<vector<ii> > graph;
vector<int> visit;
vector<vector<int> > cost,parent;
int n,m,t;

void dfs(int u){
    visit[u] = 1;
    for(ii e : graph[u]){
        int v = e.first,t = e.second;
        if(!visit[v])
            dfs(v);
        for(int i = 1;i<=n;i++){
            if(cost[v][i-1]+t < cost[u][i]){
                cost[u][i] = cost[v][i-1]+t;
                parent[u][i] = v;
            }
        }
    }
}

int main()
{
    cin >> n >> m >> t;
    graph.resize(n);
    for(int i = 0;i<m;i++){
        int a,b,t; cin >> a >> b >> t;
        --a,--b;
        graph[a].push_back({b,t});
    }
    visit.resize(n);
    cost.resize(n+1,vector<int>(n+1,INF));
    parent.resize(n+1,vector<int>(n+1,INF));
    cost[n-1][0] = 0;
    dfs(0);
    int j = 0;
    for(int i = 0;i<=n;i++){
        if(cost[0][i] <= t)
            j = i;
    }
    cout << j+1 << endl;
    int cur = 0;
    while(cur != n-1){
        cout << cur+1 << " ";
        cur = parent[cur][j--];
    }
    cout << n << endl;
    return 0;
}
