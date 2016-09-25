#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, int> mapp;

int main()
{
    string s; cin >> s;
    // compute 1st 26, mark range i, j
    int i = 0, j = 0, cnt = 0;
    while (j <= 25) {
        if (s[j] == '?') {cnt++; j++; continue;}
        mapp[s[j]]++;
        if (mapp[s[j]] == 1) cnt++;
        j++;
    }

    // compute the rest if count < 26
    cout << s.size();
    while (cnt < 26 && j < s.size()) {
        cout << cnt << ' ' << j <<'\n';
        mapp[s[i]]--;
        if (mapp[s[i]] == 0) // only >= 1
            cnt--;
        i++;
        if (s[j] == '?') {cnt++; j++; continue;}
        mapp[s[j]]++;
        if (mapp[s[j]] == 1) cnt++;
        j++;
    }

    if (cnt < 26) {
        puts("-1");
        return 0;
    }
    // fill aux array O(26)
    vector<char> aux;
    for (char k = 'A'; k <= 'Z'; ++k) {
        if (!mapp[k])
            aux.push_back(k);
    }
    cout << '*';
    for (auto k : aux)
        cout << k;
    cout << '*';

    // fill subarray with aux and print
    int l = 0;
    for (int k = 0; k < s.size(); ++k) {
        if (s[k] == '?') {
            if (i <= k && k < j)
                s[k] = aux[l++];
            else
                s[k] = 'A';
        }
    }

    for (auto k : s)
        cout << k;



}
