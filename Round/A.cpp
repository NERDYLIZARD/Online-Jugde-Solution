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
    float maxAngle = 5 * 3.14 / 12;
    while(1) {


        float normal;
        cin >> normal;
        if (normal == 8) break;
        float angle = maxAngle*normal;
        whatIs(normal);
        whatIs(angle);
        whatIs(cos(angle));
        whatIs(-sin(angle));
    }

}

