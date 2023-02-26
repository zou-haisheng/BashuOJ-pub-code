#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAX_N=100010;

int n, Q;
int data[MAX_N], num[MAX_N], dp[MAX_N][20];
inline void Query()
{
    for(int i=1;i<=n;i++)
        dp[i][0]=num[i];
    int k=(int)(log2(n+1));
    for(int j=1;j<=k;j++)
	{
        for(int i=1;i+(1<<j)-1<=n;i++)
		{
            dp[i][j] = max(dp[i][j-1], dp[i+(1<<(j-1))][j-1]);
        }
    }
}

int main()
{
    while(~scanf("%d",&n)&&n){
        scanf("%d",&Q);
        for(int i=1;i<=n;i++){
            scanf("%d",&data[i]);
            if(i==1||data[i]!=data[i-1]) num[i]=1;
			else num[i]=num[i-1]+1;
        }
        Query();
        for(int i=0;i<Q;i++)
		{
            int a, b, ans;
            scanf("%d%d", &a, &b);
            int ind=upper_bound(data+1, data+1+n, data[a])-data;
            if(ind>b) ans = b-a+1;
            else
			{
                ans = ind-a;
                int k=(int)(log2(b-ind+1));
                ans = max(ans, max(dp[ind][k], dp[b-(1<<k)+1][k]));
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}