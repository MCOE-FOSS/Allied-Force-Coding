    #include <cstdio>
    #include <cstring>
    #include <algorithm>
    #define SI ({int x;scanf("%d",&x);x;})
    using namespace std;

    const int inf = 2140000000;

    int dp[51][51][61];
    int c1[51],c2[51];
    int n1,n2;

    int get(int p1, int p2, int t)
    {
    	if(p1==0 && p2==0) return t;

    	int &r = dp[p1][p2][t];
    	if(r!=-1) return r;

    	r = inf;

    	if(p1>0)
    	{
    		r = min ( r , min(c1[p1],t) + get(p1-1,p2,abs(c1[p1]-t)) );
    	}

    	if(p2>0)
    	{
    		r = min ( r , min(c2[p2],t) + get(p1,p2-1,abs(c2[p2]-t)) );
    	}

    	return r;
    }

    int main()
    {
    	int i;
        printf("Dishes for chef 1: \n");
    	n1=SI;
        printf("Dishes for chef 2: \n");
        n2=SI;
    	memset(dp,-1,sizeof dp);

    	printf("Enter time for completing dishes for chef 1: \n");
    	for(i=1;i<=n1;i++)
        {
            printf("Dish %d: ", i);
            c1[i]=SI;

        }
        printf("Enter time for completing dishes for chef 2: \n");
    	for(i=1;i<=n2;i++)
    	{
    	    printf("Dish %d: ",i);
            c2[i]=SI;
    	}

        printf("Minimum time required: %d\n", get(n1,n2,0) );
    	return 0;
    }
