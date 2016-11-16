    #include <bits/stdc++.h>
    #define MOD 1000000007
    using namespace std;
    typedef long long LL;
    typedef pair<int, int> pii;

    int main()
    {
    	int T = 1, N;

    	scanf("%d", &T);
    	while (T--)
    	{
    		scanf("%d", &N);
    		for (int i = 0; i < N; i++)
    		{
    			for (int j = 0; j < N; j++)
    				printf("%d ", ((i + j + (N / 2) + 1) % N) + 1);
    			printf("\n");
    		}
    	}

    	return 0;
    }
