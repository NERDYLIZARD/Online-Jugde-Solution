#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
map<string, vector<string>> mapp;

string lowerCase(string& s) {
    for (char& i: s) {
        i = std::tolower(i);
    }
    return s;
}

int dfs(string s) {
    if (mapp[s].empty()) {
        return 1;
    }
    int mx = 0;
    for (string i : mapp[s]) {
        mx = max(mx, dfs(i));
    }
    return mx + 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string s, x, ss;
        cin >> s >> x >> ss;
        mapp[lowerCase(ss)].push_back(lowerCase(s));
    }

    cout << dfs("polycarp");

}


