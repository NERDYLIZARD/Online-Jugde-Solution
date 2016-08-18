#include <iostream>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

//    int n = 4;
//    string a[4] = {"0101", "1000", "1111", "0101"};


    map <string, int> test;
    map <string, int> :: iterator it;
    int k = 1;
    int count[100];

    for (int i = 1; i <= n; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        if (test[a[i]] == 0) {      // if not set
            test[a[i]] = k++;       // set
            count[test[a[i]]]++;    // count
        } else {
            count[test[a[i]]]++;    // just count (increment existing value)
        }
    }


//    for (int i = 0; i < n; ++i) {
//        cout << test[a[i]]  << endl;
//    }
//
//    cout << endl;
//
//    for (int i = 1; i <= n; ++i) {
//        cout << count[i]  << endl;
//    }

    cout << *max_element(count + 1, count + n + 1) << endl;


}
