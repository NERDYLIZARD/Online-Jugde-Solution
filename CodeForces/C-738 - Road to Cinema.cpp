// 28th NOV 2016
//codeforces.com/contest/738/problem/C
// BinarySearch: O(K*logN)  // k = n

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<long long, long long>> c;
vector<pair<long long, long long>> cars;
vector<long long> gas;
vector<long long> dist;
long n, k;
long long s, T;

bool can(long mid) {
    long long t = 0;
    for (auto d : dist) {
        long long temp = min(d, cars[mid].second - d);
        if (temp < 0) return false;
        t += temp + (d-temp)*2;
    }
    return t <= T;
}


int main()
{
    scanf("%d%d%I64d%I64d", &n,&k,&s,&T);

    long long x, y;
    for (int i = 0; i < n; ++i) {
        scanf("%I64d%I64d", &x,&y);
        c.push_back(make_pair(x, y));
    }
    sort(begin(c), end(c));
    // optimized average cases
    cars.push_back(c[0]);
    for (int i = 1; i < c.size(); ++i)
        if (cars.back().second < c[i].second)
            cars.push_back(c[i]);


    for (int i = 0; i < k; ++i) {
        scanf("%I64d", &x);
        gas.push_back(x);
    }
    gas.push_back(0);
    gas.push_back(s);
    sort(begin(gas), end(gas));

    for (int i = 1; i < gas.size(); ++i)
        dist.push_back(gas[i] - gas[i-1]);

    long l = 0, r = cars.size();
    while (l < r) {
        long mid = (l+r) >> 1;
        if (can(mid))
            r = mid;
        else
            l = mid+1;
    }

// at the end l == r
    // r wasn't updated => no appropriate car
    if (l == cars.size()) puts("-1");
    // r was updated
    else printf("%I64d", cars[l].first);

}



