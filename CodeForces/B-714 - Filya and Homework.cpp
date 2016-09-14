// 14th SEP 2016
//codeforces.com/contest/714/problem/B
// Sorting: O(nlogn)

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

    if (v.size() == 1 || v.size() == 2)
        cout << "YES";
    else if (v.size() == 3) {
        long long diff = v[1] - v[0];
        if (v[0] + diff == v[1]
            && v[2] - diff == v[1])
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";

}
