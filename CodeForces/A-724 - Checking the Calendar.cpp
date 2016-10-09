// 08th OCT 2016
//codeforces.com/contest/724/problem/A
// impl: O(1)

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> day;
string s1, s2;

int main()
{
    day["monday"] = 0;
    day["tuesday"] = 1;
    day["wednesday"] = 2;
    day["thursday"] = 3;
    day["friday"] = 4;
    day["saturday"] = 5;
    day["sunday"] = 6;

    cin >> s1 >> s2;

    if ( (day[s1]+31) % 7 == day[s2]
        || (day[s1]+30) % 7 == day[s2]
        || (day[s1]+28) % 7 == day[s2] )
        puts("YES");
    else
        puts("NO");


}

