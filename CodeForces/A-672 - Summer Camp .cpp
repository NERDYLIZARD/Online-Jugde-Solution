#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#include <sstream>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

int main()
{
    vector<char> vc;
    for (int i = 1; ; ++i) {
        string ss = to_string(i);
        for (auto i : ss)
            vc.emplace_back(i);
        if (vc.size() > 1000) break;
    }

    int n;
    cin >> n;
    cout << vc[n - 1];
//    cout << '\n' << vc[1000];

}

