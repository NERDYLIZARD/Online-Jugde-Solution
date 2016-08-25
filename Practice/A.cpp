#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
map<string, int> mapp;

string toLowerCase(string& s) {
    for (char& i: s) {
        i = std::tolower(i);
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    mapp["polycarp"] = 1;

    for (int i = 1; i <= n; ++i) {
        string s, x, ss;
        cin >> s >> x >> ss;
        mapp[toLowerCase(s)] = mapp[toLowerCase(ss)] + 1;
    }

    int mx = 0;
    for (auto i : mapp)
        mx = max(i.second, mx);
    cout << mx;

}


