// 22nd OCT 2016
//codeforces.com/contest/725/problem/B
// impl: O(n)
    // elegant look-up table.

#include <iostream>
#include <string>

using namespace std;

int main()
{
                //a, b, c, d, e, f
    int mapp[] = {4, 5, 6, 3, 2, 1};
    long long n; char c;
    cin >> n >> c;

    long long block = (n-1) / 4;
    long long ans = ((6 + 1 + 6) + 3) * block;

    if (!(n&1))
        ans += 7;

    ans += mapp[c - 'a'];
    cout << ans;


}

