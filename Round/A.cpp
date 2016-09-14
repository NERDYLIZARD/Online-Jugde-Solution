#include <iostream>

using namespace std;

int main()
{
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    if (l2> r1 || l1 > r2) {
        cout << 0;
        return 0;
    }

    long long ans = 0;
    if (l2 <= r1 || l1 <= r2) {
        long l, r;
        if (l1 >= l2) {
            l = l1;
            r = r2;
        } else {
            l = l2;
            r = r1;
        }

        ans = abs(r - l) + 1;
        if ( (k >= l && k <= r)
            || (k >= r && k <= l) )
            ans--;
    }
    else if ( l2 > l1 && r1 > r2) {
        ans = abs(l2 - l1) + abs(r1 - r2) + 2;
        if ((k >= l1 && k <= l2)
             || (k >= r2 && k <= r1))
            ans--;
    }
    else if (l2 < l1 && r1 < r2) {
        ans = abs(l2 - l1) + abs(r1 - r2) + 2;
        if ((k >= l2 && k <= l1)
            || (k >= r1 && k <= r2))
            ans--;
    } else {
        ans = abs(r1-l1) + 1;
        if (k >= l1 && k <= r1)
            ans--;
    }



    if (ans < 0) ans = 0;


    cout << ans;


}

