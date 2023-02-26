#include<bits/stdc++.h>
#define N 1234
using namespace std;
namespace zhs
{
	int n, k, m, ans, f[N], dp[N][N], fa[101234];
	int find(int x)
	{
		return fa[x]==x?x:fa[x]=find(fa[x]);
	}
	int main()
	{
		scanf("%d%d%d", &n, &k, &m);
		for(int i=1;i<=n;i++) fa[i] = i;
		for(int i=1;i<=k;i++)
		{
			int a, b;
			scanf("%d%d", &a, &b);	
			fa[find(a)] = find(b);
		}
		for(int i=1;i<=m;i++) scanf("%d", f+i);
		for(int i=1;i<=m;i++) f[i] = find(f[i]);
		for(int i=1;i<=m;i++) dp[i][i] = 1;
		for(int j=1;j<=m;j++)
			for(int i=j-1;i;i--)
			{
				if(f[i]==f[j])
					dp[i][j] = max(dp[i][j], dp[i+1][j-1]+2);
				else 
					dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
				ans = max(ans, dp[i][j]);
			}
		cout<<ans;
		return 0;
	}
}

int main()
{
	//freopen("d.in", "r", stdin);
	//freopen("d.out", "w", stdout);
	zhs::main();
	return 0;
}
//8.56MB