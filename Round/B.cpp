#include <cstdio>
#include <algorithm>

using namespace std;

int n;

int main()
{
//    scanf("%d", &n);
    printf("%d ", sizeof(n));
    n = 1e9;
    printf("%d ", sizeof(n));
    printf("%d", n);
}
