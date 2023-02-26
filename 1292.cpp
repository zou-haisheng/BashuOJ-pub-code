#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	const int inf=2e9;
	int n, m, a[510], dis[510][510], f[510][510];
	int main()
	{
		scanf("%d%d", &n, &m);
		for(int i=2;i<=n;i++)
		{
			scanf("%d",a+i);
			a[i] += a[i-1];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				for(int k=i;k<=j;k++) dis[i][j] += abs(a[k]-a[(i+j)>>1]);
			}
		}
		for(int i=0;i<=n;i++)
			for(int j=0;j<=m;j++)
				f[i][j] = inf;
		f[0][0] = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(j>i)
				{
					f[i][j] = 0;
					continue;
				}
				for(int k=j-1;k<=i;k++) f[i][j] = min(f[i][j], f[k][j-1]+dis[k+1][i]);
			}
		}
		printf("%d\n", f[n][m]);
		return 0;
	}
}
int main()
{
	zhs::main();
}