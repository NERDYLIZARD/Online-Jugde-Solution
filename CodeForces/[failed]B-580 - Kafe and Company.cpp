#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;


struct point {
    long long x, y;
} arr[200000];

bool cmp(const point &one, const point &two) { return one.x < two.x; }

int main() {
    long long i, j, k;

//    long long n = 4;
//    point arr[n];
//    long long poor = 5;
//    long long a[4] = {75, 0, 150, 75};
//    long long b[4] = {5, 100, 20, 1};


//    long long n = 5;
//    long long poor = 100;
//    long long a[5] = {0, 11, 99, 46, 87};
//    long long b[5] = {7, 32, 10, 8, 54};

//    long long n = 5;
//    long long poor = 9;
//    long long a[5] = {0, 2, 8, 5, 3};
//    long long b[5] = {98, 1000000000, 1000000000, 999999999, 989898989};

//    long long n = 4;
//    long long poor = 2;
//    point arr[n];
//    long long a[4] = {10909234, 10909236, 10909237, 10909235};
//    long long b[4] = {9, 8, 10, 98};

    long long n, poor;
    cin >> n >> poor;

    for (i = 0; i < n; i++) {
        scanf("%I64d %I64d", &arr[i].x, &arr[i].y);
    }

    sort(arr, arr + n, cmp);

//    for (int i = 0; i < n; i++) {
//        cout << arr[i].x << " " << arr[i].y << endl;
//    }

    long long ans = 0;
    for (i = 0; i < n; i++) {
        long long count = 0;
        for (j = i; j < n; j++) {
            if (arr[j].x - arr[i].x < poor) {
                count += arr[j].y;
            } else {
                break;
            }
        }
        for (k = i; k >=0; k--) {
            if (arr[i].x - arr[k].x < poor) {
                count += arr[k].y;
            } else {
                break;
            }
        }
        j--;
        k++;

        while (abs(arr[j].x - arr[k].x) >= poor) {
            if (arr[j].y < arr[k].y) {
                count -= arr[j].y;
                j--;
            } else {
                count -= arr[k].y;
                k++;
            }
        }


        count -= arr[i].y;     // subtract itself once;
        if (ans < count) {
            ans = count;
        }
    }

    cout << ans << endl;


}



