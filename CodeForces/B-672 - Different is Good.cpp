#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#include <sstream>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

int main()
{
    long n;
    cin >> n;
    if (n > 26) {
        cout << -1;
        return 0;
    }
    string s;
    cin >> s;

    map<char, int> mapp;

    for (auto i : s) {
        mapp[i]++;
    }
    long cnt = 0;
    for (auto i : mapp) {
        if (i.second > 1)
            cnt += i.second - 1;
    }
    cout << cnt;

}

