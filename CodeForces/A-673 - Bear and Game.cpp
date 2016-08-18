#include <iostream>
#include <limits>
#include <cmath>
#include <set>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;


using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
//    a[n] = 17000;
    int track = 0;
    int i = 0;
//    while ( abs(a[i] - track) <= 15) {
//        track = a[i];
//        i++;
//    }
    for (i = 0; i < n; ++i) {
        if ( abs(a[i] - track) > 15 )
            break;
        track = a[i];
    }

    track += 15;
    if (track > 90)
        track = 90;

    cout << track;

}

