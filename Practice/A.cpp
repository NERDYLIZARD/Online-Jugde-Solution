#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <vector>
#include <map>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;

using namespace std;

void traverse(int*, int);

string s = "nlnnlll";
map<int, int> mapp;

int main() {
    int i = 0;
    traverse(&i, -1);

    for (int i = 1; i < s.length(); ++i)
        cout << i << " : " << mapp[i] << '\n';

}

void traverse(int *i, int j) {
    j++;
    if (s[*i] == 'l') {
        j--;
        whatIs(i);
        whatIs(j);

        mapp[*i] = j;
        return;
    }

    traverse(&i, j);
    traverse(&i, j);

    j--;
    mapp[*i] = j;

}



