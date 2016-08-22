// www.spoj.com/problems/NICEBTRE/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int i;
string s;
int traverse();

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        i = 0;
        int ans = traverse();
        cout << ans << '\n';

    }
    return 0;
}

int traverse() {
    if (s[i++] == 'l') {
        return 0;
    }
    return max(traverse(), traverse()) + 1;
}



