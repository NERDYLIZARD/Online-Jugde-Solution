#include <iostream>
using namespace std;

bool dfs(int, int, bool);
long long cnt;
int n, k, d;
long long mod = 1000000007;

int main() {
    cin >> n >> k >> d;
    dfs(0, 0, 0);
    cout << cnt % mod;
}

bool dfs(int i, int w, bool check) {
    if (i >= d)
        check = true;

    w += i;
    if(w > n)
        return true;
    else if (w == n && check) {
        cnt++;
        return true;
    }
    else { // w < n || (w == n && !check)
        bool terminate = false;
        for (int it = 1; it <= k; ++it) {
            if (!terminate) {
                terminate = dfs(it, w, check);
            } else {
                break;
            }
        }
        return false;
    }
}


