#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

string s;

int main()
{

    cin >> s;
    s += 'E';

    int ans = 0;
    int cur = 0;

    for (int i = 0; i < s.size(); ++i) {

        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
            || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            ans = max(ans, i-cur+1);
            cur = i+1;
        }
    }

    printf("%d", ans);

}
