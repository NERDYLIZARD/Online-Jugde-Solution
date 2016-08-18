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

int dfs(int, int, int ,int);

int a[1001], c[1001];

int main()
{
    int t; cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        a[0] = 0; a[m] = 0;
        c[0] = 0; c[n] = 0;
        for (int i = 1; i < m; ++i)
            cin >> a[i];
        for (int i = 1; i < n; ++i)
            cin >> c[i];
        int cnt = dfs(0, m, 0, n);
        cout << cnt << '\n';
    }


}

int dfs(int l, int r, int t, int b) {

    int col = r - l;
    int row = b - t;

//    cout << l << '.' << r << '.' << t << '.' << b << ' ';

    if (col == 1 && row == 1) {
//        cout << "done ";
        return 0;
    }

    int mxCol = *max_element(a + l + 1, a + r);
    int mxColIndex = distance(a, find(a + l + 1, a + r, mxCol));

    int mxRow = *max_element(c + t + 1, c + b);
    int mxRowIndex = distance(c, find(c + t + 1, c + b, mxRow));

    // no more cut for Row or Col
    if (col == 1) mxCol = -1;
    if (row == 1) mxRow = - 1;

    if (mxCol >= mxRow) {
//        cout << mxCol << "c \n";
        return mxCol + dfs(l, mxColIndex, t, b)
                + dfs(mxColIndex, r, t, b);
    } else {
//        cout << mxRow << "r \n";
        return mxRow + dfs(l, r, t, mxRowIndex)
                + dfs(l, r, mxRowIndex, b);
    }
}


