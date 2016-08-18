#include <iostream>
#include <string>
#include <climits>
#include <cmath>
#include <vector>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;
#include <cstdio>
using namespace std;

const double INF = 1e100;

class Point {
public:
    long x, y;

    Point() {}
    Point(long x, long y) : x(x), y(y) {}
    friend double dist(Point, Point);
    void sett() { cin >> x;
                    cin >> y;}

};

double dist(Point a, Point b) {
    return sqrt( (long long) ( pow(a.x - b.x, 2)
                + pow(a.y - b.y, 2) )
                );
}

int main() {
    long ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    Point a(ax, ay);
    Point b(bx, by);
    Point c(cx, cy);

    long n;
    cin >> n;
    vector<Point> p(n);

    for (auto i = 0; i < n; ++i) {
        p[i].sett();
    }

    double track = 0.0;
    double mn1 = INF;
    double mn2 = INF;

    for (auto i = 0; i < n; ++i) {
        track += 2 * (dist(c, p[i]));
    }

    for (auto i = 0; i < n; ++i) {
        mn1 = min(mn1, dist(a, p[i]) - dist(p[i], c) );
    }

    for (auto i = 0; i < n; ++i) {
        mn2 = min(mn2, dist(b, p[i]) - dist(p[i], c) );
    }

    printf("%.12f\n", track);

}



