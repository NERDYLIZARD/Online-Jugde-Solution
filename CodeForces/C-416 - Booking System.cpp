// 10th JAN 2017
//codeforces.com/problemset/problem/416/C
// BinarySearch: O(n^2) // due to deletion of vector's elements

#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

vector<pair<int, pair<int,int>>> requests;
vector<pair<int, int>> tables;

int main()
{
    int n; scanf("%d", &n);
    int p, c;
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &c, &p);
        requests.push_back(make_pair(p, make_pair(c, i)));
    }
    int m; scanf("%d", &m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &p);
        tables.push_back(make_pair(p, i));
    }

    sort(begin(requests), end(requests),
         greater<pair<int, pair<int,int>>>());
    sort(begin(tables), end(tables));

    vector<pair<int, int>> ans;
    int amount = 0;
    for (auto x : requests) {
        auto grantedTable = lower_bound(tables.begin(), tables.end(),
                            make_pair(x.second.first, 0));
        if (grantedTable == tables.end()) continue;

        amount += x.first;
        ans.push_back(make_pair(x.second.second, grantedTable->second));
        tables.erase(grantedTable);
    }

    printf("%d %d\n", ans.size(), amount);
    for (auto x : ans)
        printf("%d %d\n", x.first, x.second);

}



