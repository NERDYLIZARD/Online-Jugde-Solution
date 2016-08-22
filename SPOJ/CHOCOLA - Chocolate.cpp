// www.spoj.com/problems/CHOCOLA
#include <iostream>
#include <algorithm>

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

    if (col == 1 && row == 1) {
        return 0;
    }

    int mxCol = *max_element(a + l + 1, a + r);
    int mxColIndex = distance(a, find(a + l + 1, a + r, mxCol));

    int mxRow = *max_element(c + t + 1, c + b);
    int mxRowIndex = distance(c, find(c + t + 1, c + b, mxRow));

    // no more cut for Row or Col
        // set -1 for next comparison
    if (col == 1) mxCol = -1;
    if (row == 1) mxRow = - 1;

    if (mxCol >= mxRow) {
        return mxCol + dfs(l, mxColIndex, t, b)
                + dfs(mxColIndex, r, t, b);
    } else {
        return mxRow + dfs(l, r, t, mxRowIndex)
                + dfs(l, r, mxRowIndex, b);
    }

}


