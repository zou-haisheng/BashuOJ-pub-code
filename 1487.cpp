#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int m, n, hs, ls, he, le, ans;
	int dx[4]={1, -1, 0, 0};
	int dy[4]={0, 0, 1, -1};
	bool a[15][15];
	
	void dfs(int x, int y)
	{
		if(x==he && y==le) ans++;
		else
		{
			a[x][y] = false;
			for(int i=0;i<4;i++)
				if(a[x+dx[i]][y+dy[i]]) dfs(x+dx[i], y+dy[i]);
			a[x][y] = true;
		}
	}
	
	int main()
	{
		cin>>m>>n;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%d%d%d%d", &hs, &ls, &he, &le);
		if(!a[hs][ls]||!a[he][le]) cout<<-1;
		else
		{
			dfs(hs, ls);
			if(!ans) cout<<-1;
			else cout<<ans;
		}
		return 0;
	}
}

int main()
{
 	zhs::main();
}
