#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

bool isBeingUsed(string, vector<string>);
string getLeaves(string);

int n;
map<string, string> mapp;
//vector<string> a(1002);
vector<string> a;

int main()
{
	cin >> n;
    vector<string> cur(n), next(n), bu;

    int cnt = 0;
    int k = 0;

	for (int i = 0; i < n; ++i) {
		cin >> cur[i];
		cin >> next[i];

		if (!isBeingUsed(next[i], bu) ) {
            if (!isBeingUsed(cur[i], bu) ) {
                cnt++;
                a.push_back(cur[i]);
            }

            mapp[cur[i]] = next[i];
            bu.push_back(next[i]);
		}

	}
	cout << cnt << endl;

    vector<string> :: iterator it;
    for (it = a.begin(); it != a.end(); ++it) {
        cout << *it << " " << getLeaves(*it);
        cout << endl;
    }

}


bool isBeingUsed(string test, vector<string> bu) {
	for (int i = 0; i < bu.size(); ++i) {
		if (test == bu[i])
			return true;
	}
	return false;
}


string getLeaves(string s) {
    if (mapp[s] == "")
        return s;
    return getLeaves(mapp[s]);

}



