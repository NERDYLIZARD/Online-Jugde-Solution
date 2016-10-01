#include <cstdio>
#include <vector>

using namespace std;

vector<pair<int, long long>> t[5008];
vector<int> V;
int n, m;
long long T;

vector<int> dfs(int n, long long w) {

    vector<int> v;
    for (auto i : t[n]) {

        if (i.second + w > T) continue;

        vector<int> vv(dfs(i.first, i.second + w));
        if (v.size() <= vv.size()) {
            v.clear();
            v = vv;
        }
    }
    //base case
    v.push_back(n);
    return v;
}

int main()
{
    scanf("%d %d %I64d", &n,&m,&T);
    int x, y; long long z;
    for (int i = 1; i <= m; ++i) {
        scanf("%d %d %I64d", &x,&y,&z);
        t[x].push_back(make_pair(y, z));
    }

    vector<int> V = dfs(1, 0);
    printf("%d\n", V.size());
    for (auto i : V)
        printf("%d ", i);

}

