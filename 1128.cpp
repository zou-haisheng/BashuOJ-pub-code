#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int v[101][101];
	int maxx, minx, miny, maxy;
	int sum;
	int tx, ty;
	int dx[10001]={1, -1, 0, 0}, dy[10001]={0, 0, 1, -1};
	int n, m;
	char map[10001][10001];
	int room, cattle;
	void dfs(int x, int y)
	{
		sum++;
		if(x>maxx) maxx = x;
		if(y>maxy) maxy = y;
		if(x<minx) minx = x;
		if(y<miny) miny = y;
		v[x][y] = 1;
		for(int i=0;i<=3;i++)
		{
			tx = x+dx[i];
			ty = y+dy[i]; 
			if(tx>=1 && tx<=n && ty>=1 && ty<=m && map[tx][ty]=='#' && !v[tx][ty]) dfs(tx, ty);
		}
	}
	int main() {
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>map[i][j];
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(!v[i][j]&&map[i][j]=='#')
				{
					maxx = 0;
					maxy = 0;
					minx = n;
					miny = m;
					sum = 0;
					dfs(i, j);
					if((maxx-minx+1)*(maxy-miny+1)==sum) room++;
					else cattle++;
				}
			}
		}
		cout<<room<<'\n'<<cattle;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
