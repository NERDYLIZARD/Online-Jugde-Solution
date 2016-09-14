// 14th SEP 2016
//codeforces.com/contest/714/problem/B
// Sorting: O(nlogn)
    // elegant if-else ordering

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> v;

int main()
{
    long n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);

    long long cur = -1;
    for (int i = 0; i < n; ++i) {
        if (v.size() > 3) break;
        if (cur != a[i]) {
            v.push_back(a[i]);
            cur = a[i];
        }
    }

    if (v.size() < 3) puts("YES");
    else if (v.size() > 3) puts("NO");
    else if (a[2] - a[0] == 2 * a[1]) puts("YES");
    else puts("NO");

}

