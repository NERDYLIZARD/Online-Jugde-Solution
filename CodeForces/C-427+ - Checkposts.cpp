// 15th JAN 2017
//codeforces.com/problemset/problem/427/C
// tarjanSCC: O(n+m)

#include <cstdio>
#include <vector>
#include <stack>

using namespace std;
typedef long long i64;

const i64 mod = 1000000007;
const int N = 100008;

vector<int> edges[N];
stack<int> st;
int firstAppear[N], root[N];
bool inStack[N];
i64 costs[N];

int n, m;
i64 total = 0, ways = 1;

void tarjanScc(long u) {

    static int time = 0;

    root[u] = firstAppear[u] = ++time;
    st.push(u);
    inStack[u] = true;

    for (auto v : edges[u]) {
        if (!firstAppear[v]) {
            tarjanScc(v);
            root[u] = min(root[u], root[v]);
        }
        else
        if (inStack[v])
            root[u] = min(root[u], firstAppear[v]);
    }

    // root of SCCs
    if (root[u] == firstAppear[u]) {

        i64 minCost = mod;
        i64 minCount = 1;

        for(;;) {
            long top = st.top();
            st.pop();
            inStack[top] = false;

            if (minCost > costs[top]) {
                minCost = costs[top];
                minCount = 1;
            }
            else if (minCost == costs[top])
                minCount++;

            if (top == u) break;
        }

        total += minCost;
        ways = ways * minCount%mod;

    }

}


int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", costs+i);
    scanf("%d", &m);
    for (int x,y, i = 1; i <= m; ++i) {
        scanf("%d%d", &x,&y);
        edges[x].push_back(y);
    }

    for (int i = 1; i <= n; ++i) {
        if (!firstAppear[i])
            tarjanScc(i);
    }

    printf("%I64d %I64d", total, ways);

}



