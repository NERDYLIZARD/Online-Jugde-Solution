#include <cstdio>
#include <algorithm>

using namespace std;

int a[3];

int main()
{
    for (int i = 0; i < 3; ++i)
        scanf("%d", a+i);

    sort(a, a+3);
        for (int i = 0; i < 3; ++i)
        printf("%d", a+i);


}

