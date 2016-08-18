#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int cnt = 0;
	int x = min(a, b);
	int y = max(a, b);

    if (x == 1 && y == 1) {
        cout << "0";
        return 0;
    }
	while (x > 0 && y > 0) {
		x++;
		y -= 2;
		cnt++;
		if(y <= 2) {
			swap(x, y);
		}
	}

	cout << cnt;
}
