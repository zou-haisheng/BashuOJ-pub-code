#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int t, n, m, x, y, ans;
	int dx[8]={1, 1, 2, 2, -1, -1, -2, -2};
	int dy[8]={2, -2, 1, -1, 2, -2, 1, -1};
	bool bj[10001][10001];
	void dfs(int now, int x, int y)
	{
		if(now==n*m)
		{
			ans++;
			return;
		}
		bj[x][y] = 1;
		for(int i=0;i<8;i++)
		{
			int tx=x+dx[i], ty=y+dy[i];
			if(tx<0||ty<0||tx>=n||ty>=m) continue;
			if(bj[tx][ty]) continue;
			dfs(now+1, tx, ty);
		}
		bj[x][y] = 0;
	}
	int main()
	{
		scanf("%d", &t);
		for(int i=1;i<=t;i++)
		{
			ans = 0;
			scanf("%d%d%d%d", &n, &m, &x, &y);
			dfs(1, x, y);
			cout<<ans<<'\n';
		}
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
