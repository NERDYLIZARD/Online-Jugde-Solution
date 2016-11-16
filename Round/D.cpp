#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long two, three, five, six;
    scanf("%d%d%d%d", &two,&three,&five,&six);

    long long ans = 0;

    long temp = min(five, six);

//    if ((8*temp < three) && (two >= three)) {
//        ans = 32 * min(two, three);
//    }
//
//    else {
        if (temp >= two) {
            ans = two * 256;
        }
        else {
            long remainedTwo = abs(temp-two);
            ans = (two - remainedTwo) * 256;
            if (remainedTwo >= three) {
                ans += three * 32;
            } else {
                ans += remainedTwo * 32;
            }
        }
//    }

    printf("%I64d", ans);

}
