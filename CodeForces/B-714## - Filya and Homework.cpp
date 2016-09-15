// 14th SEP 2016
//codeforces.com/contest/714/problem/B
// Set: O(NlogN) due to insert() = O(logN)
    // elegant if-else ordering

#include <iostream>
#include <set>

using namespace std;

set<long long> sett;

int main()
{
    long n; cin >> n;
    long long cur;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        sett.insert(cur);
    }

    int a = *(sett.begin());
    int b = *(++sett.begin());
    int c = *(++++sett.begin());

    if (sett.size() < 3) puts("YES");
    else if (sett.size() > 3) puts("NO");
    else if (c + a == 2 * b) puts("YES");
    else puts("NO");

}

