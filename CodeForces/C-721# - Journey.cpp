// 26th OCT 2016
//codeforces.com/contest/721/problem/C
// DP + Bellman-Ford-like
    // on DAG's shortest path: O(m*n)  O'(m*n)

#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int maxn = 5002;
const long long INF = 1e9+8;

int n, m, T;
vector<pair<int, int>> adjacents[maxn];
unsigned short path [maxn][maxn];
int dp[maxn][maxn];

int dfs(int n, int cnt) {
    if (dp[n][cnt] != -1 )
        return dp[n][cnt];

    dp[n][cnt] = INF;
    for (auto i : adjacents[n]) {
        int temp = dfs(i.first, cnt-1) + i.second;
        if (temp < dp[n][cnt]) {
            dp[n][cnt] = temp;
            path[n][cnt] = i.first;
        }
    }
    return dp[n][cnt];

}


int main()
{
    scanf("%d%d%d", &n,&m,&T);
    int u, v, t;
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d%d", &u,&v,&t);
        adjacents[v].push_back(make_pair(u, t));
    }

    memset(dp, -1, sizeof(dp));
    dp[1][1] = 0;
    int ans;
    for (int i = n; i >= 1; --i) {
        if (dfs(n, i) <= T) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);
    vector<int>ansPath;
    ansPath.push_back(n);
    int i = n;
    while (ans > 1) {
        ansPath.push_back(path[i][ans]);
        i = path[i][ans];
        --ans;
    }

    for (int i = ansPath.size()-1; i >= 0; --i)
        printf("%d ", ansPath[i]);


}



