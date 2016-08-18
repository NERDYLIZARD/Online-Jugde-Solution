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

#include <stdio.h>
int main()
{
    int i,x,ans,num,n,fa[2001];
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&fa[i]);
        }
        ans=1;
        for(i=1; i<=n; i++)
        {
            num=1;
            x=i;
            while(fa[x]!=-1)
            {
                num++;
                x=fa[x];
            }
            if(num>ans)
                ans=num;
        }
        printf("%d\n",ans);
    }
    return 0;
}

