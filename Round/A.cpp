#include <string>
#include <iostream>

using namespace std;

int partner[] = {7, 4, 5, 6, 1, 2, 3, 8};
string letter[] = {"SL", "LB", "MB", "UB",
                        "LB", "MB", "UB", "SU"};

int main()
{
    int z; cin >> z;
    while (z--) {
        int n; cin >> n;
        int seat = n % 8;
        int block = (n-1) / 8;
        int ans = partner[seat] + 8*block;
        cout << ans << letter[seat] << '\n';
    }

}



