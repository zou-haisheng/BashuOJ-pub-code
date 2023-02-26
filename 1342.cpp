#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	char map[101][101];
	bool b[101][101]; 
	int dx[4]={1, -1, 0, 0};
	int dy[4]={0, 0, 1, -1};
	int sx,sy;
	int ta,tb;
	int m, n;
	int sum;
	int tx, ty;
	int ans=INT_MAX;
	void dfs(int x, int y)
	{
		if(sum>ans) return;
		if(x==tx && y==ty)
		{
			ans = min(ans, sum);
			return;
		}
		for(int i=0;i<4;i++)
		{
			if(map[x+dx[i]][y+dy[i]]!='#' && x+dx[i]>0 && x+dx[i]<=n && y+dy[i]>0 && y+dy[i]<=m && !b[x+dx[i]][y+dy[i]])
			{
				sum++;
				b[x+dx[i]][y+dy[i]] = true;
				dfs(x+dx[i], y+dy[i]);
				b[x+dx[i]][y+dy[i]] = false;
				sum--;
			}
		}
	}
	int main()
	{
		scanf("%d%d", &n, &m);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>map[i][j];
				if(map[i][j]=='S')
				{
					sx = i;
					sy = j;
					b[i][j] = true;
				}
				if(map[i][j]=='T')
				{
					tx = i;
					ty = j;
					map[i][j] = '.';
				}
			}
		}
		dfs(sx, sy);
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
