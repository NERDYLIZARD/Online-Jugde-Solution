// 10th SEP 2016
//codeforces.com/problemset/problem/712/B
// Implementation: O(N)
#include <iostream>
#include <cmath>
#include <map>
#include <string>

using namespace std;

map<char, int> mapp;

int main()
{
    mapp.emplace('R', 1);
    mapp.emplace('U', 1);
    mapp.emplace('L', -1);
    mapp.emplace('D', -1);

    string s; cin >> s;

    if (s.size() & 1) {
        cout << -1;
        return 0;
    }

    long cnt = 0, cnt1 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R' || s[i] == 'L')
            cnt += mapp[s[i]];
        else
            cnt1 += mapp[s[i]];
    }

    cout << (abs(cnt) + abs(cnt1)) / 2;
}

