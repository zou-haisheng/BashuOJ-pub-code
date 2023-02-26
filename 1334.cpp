#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, m, s;
	int mapp[101][101];
	int vis[101][101];
	int dis[4][2]={{0,1}, {1,0}, {0,-1}, {-1,0}};
	int dfs(int x1, int y1)
	{
		vis[x1][y1] = 1;
		mapp[x1][y1] = 0;
		for(int k=0;k<=3;k++)
		{
			int x, y;
			x = x1+dis[k][0];
			y = y1+dis[k][1];
			if(x<1||x>n||y<1||y>m) continue;
			if(mapp[x][y]==1 && vis[x][y]==0)
			{	
				s++;
				vis[x][y] = 1;
				dfs(x, y);
				vis[x][y] = 0;
			}
		}
		return s;
	}
	int main()
	{
		cin>>n>>m;
		int maxn=0;
		memset(vis, 0, sizeof(vis));
		memset(mapp, 0, sizeof(mapp));
		if(n==0 && m==0) return 0;
		else
		{
			for(int i=1; i<=n; i++)
				for(int j=1; j<=m; j++)
					cin>>mapp[i][j];
			for(int i=1; i<=n; i++)
			{
				for(int j=1; j<=m; j++)
				{
					if(mapp[i][j]==1)
					{
						s = 1;
						s = dfs(i, j);
						if(maxn<s) maxn=s;
					}
				}
			}
			cout<<maxn;
		}
	}
}

int main()
{
	zhs::main();
	return 0;
}
