#include <iostream>
#include <limits>
#include <cmath>
#include <set>
#define whatIs(x) std::cerr << #x << ": " << x << std::endl;


using namespace std;

int main() {
    long n;
    cin >> n;
    long days = (n / 7) * 2;
    long test1 = days;
    long test2 = days;
    if (n % 7 - 5 >= 0)
        test1 += n % 7 - 5;

    if (n % 7 < 2)
        test2 += n % 7;
    else
        test2 += 2;

    if (test1 < test2)
        cout << test1 << " " << test2;
    else
        cout << test2 << " " << test1;



}



