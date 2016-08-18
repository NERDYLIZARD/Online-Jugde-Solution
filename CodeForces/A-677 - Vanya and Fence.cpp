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
    int n, h;
    cin >> n >> h;
    int a[n];
    int cnt = n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > h)
            cnt ++;
    }
    cout << cnt;
}


