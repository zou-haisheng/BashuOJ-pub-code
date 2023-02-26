#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int r, s, ans;
	int dx[4]={1, -1, 0, 0};
	int dy[4]={0, 0, 1, -1};
	bool a[26];
	char b[21][21];
	
	void dfs(int x, int y, int t)
	{
		if(x<1 || y<1 || x>r || y>s)
		{
			return;
		}
		ans = max(t, ans);
		a[b[x][y]-'A'] = true;
		for(int i=0;i<4;i++)
		{
			if(!a[b[x+dx[i]][y+dy[i]]-'A'])
			{
				dfs(x+dx[i], y+dy[i], t+1);
			}
		}
		a[b[x][y]-'A'] = false;
	}                       
	int main()
	{
		cin>>r>>s;
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=s;j++)
			{
				cin>>b[i][j];
			}
		}
		dfs(1, 1, 1);
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
