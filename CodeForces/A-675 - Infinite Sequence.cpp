#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if (c == 0) {
        if (a == b)
            cout << "YES";
        else
            cout << "NO";
    }
    else if (c > 0 && a > b) {
            cout << "NO";
    }
    else if (c < 0 && a < b) {
            cout << "NO";
    }
    else {
        if ( (b - a) % c == 0)
            cout << "YES";
        else
            cout << "NO";
    }




}

