#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int stringValue(string);
bool matchOrder(string, string);

int main() {
//    string a = "hop";
//    string b = "ho";

//    cout << a.length();
//    cout << b.length();

//cout << stringValue(a);
    string s, t;
    cin >> s >> t;

    if (s.length() > t.length()
        && matchOrder(s, t) ) {
        cout << "automaton";
    }

    else if (s.length() == t.length()
        && stringValue(s) == stringValue(t) ) {
            cout << "array";
    }

    else {
        std::map<char, int> sMap;
        std::map<char, int> tMap;

        for (string::iterator it = s.begin(); it != s.end(); ++it) {
        	sMap[*it]++;
        }
        for (string::iterator it = t.begin(); it != t.end(); ++it) {
        	tMap[*it]++;
        }
        
		map<char, int>::iterator it;
        for (it = tMap.begin(); it != tMap.end(); ++it) {
        	if (it->second != 0) {
        		if (sMap[it->first] < it->second)
        			break;
        	}
        }
        

        if (it == tMap.end()) {
        	cout << "both";
        }
        else {
            cout << "need tree";
        }
    }

}


int stringValue(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        sum += s[i];
    }
    return sum;
}

bool matchOrder(string s, string t) {
    int i;
    int k = 0;
    for (i = 0; i < s.length(); ++i) {
        if(s[i] == t[k]) {
            k++;
        }
    }

    if (i == s.length() && k == t.length())
        return true;
    else
        return false;
}






