// 02nd SEP 2016
// uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3769
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<long, vector<long>> t;

void print(int n) {
    if (n == -1) return;
    print(t[n][0]);
    print(t[n][1]);
    cout << n << '\n';

}

void build(int n, int p, int i) {
    if(n == -1) {
        t[p][i>=p] = i;
        return;
    }
    if (i >= n)
        build(t[n][1], n, i);
    else
        build(t[n][0], n, i);

}

int main() {
    vector<long> a;
    long input;
    while (scanf("%d", &input) != EOF)
        a.push_back(input);

    for (int i : a) {
        t[i].push_back(-1);
        t[i].push_back(-1);
    }

    for (int i = 1; i < a.size(); ++i)
        build(a[0], 0, a[i]);

    print(a[0]);

    return 0;
}


