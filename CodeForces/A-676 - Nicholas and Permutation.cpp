#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mn = 200, mx = 0;
    int x, y;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (mn >= a[i]) {
            mn = a[i];
            x = i;
        }
        if (mx <= a[i]) {
            mx = a[i];
            y = i;
        }
    }

    if ( (x == 0 && y == n - 1)
        || (x == n - 1 && y == 0) ) {
        cout << abs(y - x);
        return 0;
    }

    if (x <= y) {
        cout << max( (y - x) + max(x, n - 1 - y),
                    (y - x) + max(x, n - 1 - y)
                    );
    } else { // x > y
        cout << max( (x - y) + max(y, n - 1 - x),
                    (x - y) + max(y, n - 1 - x)
                    );
    }


}


