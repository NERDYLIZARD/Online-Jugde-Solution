#include <iostream>

using namespace std;

int main() {
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;


    for (int j = 1; j <= t; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
            if (s[n - 1] == 'B')
                n--;
        }
    }

    cout << s;

}
