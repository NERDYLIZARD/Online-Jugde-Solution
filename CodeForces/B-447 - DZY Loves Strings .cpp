#include <iostream>
#include <climits>
#include <cmath>
#include <map>
#include <algorithm>


using namespace std;

map <char, int> c;


int main() {
    int j = 0;
    for (char i = 'a'; i != 'z' + 1; ++i, ++j) {
        c[i] = j;
    }

//    for (int i = 'a'; i != 'z'+1 ; ++i)
//        cout << c[i] << endl;

//    string s = "abc";
//    long k = 3;
//    int b[26] = {1, 2, 2, 1, 1, 1 ,1 ,1,1, 1,
//                1, 2, 2, 1, 1, 1 ,1 ,1,1, 1,
//                1, 2, 2, 1, 1, 1};

    string s;
    cin >> s;
    int k;
    cin >> k;
    int b[26];
    for (int i = 0; i < 26; i++) {
        cin >> b[i];
    }


    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += b[c[s[i]]] * (i + 1);
    }

//    cout << sum;

    int count = 0;
    for (int i = s.size() + 1; i <= s.size() + k; ++i) {
        count += i;
    }
    sum += *max_element(b, b + 26) * count ;

    cout << sum;

}
