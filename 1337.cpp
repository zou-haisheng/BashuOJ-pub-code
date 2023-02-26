#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, m, d[8][2]={{-1,0}, {1,0}, {0,-1}, {0,1}, {-1,1}, {1,1}, {1,-1}, {-1,-1}};
	char a[120][120];
	struct node{
		int x;
		int y;
	}q[100010];
	void bfs(int x0,int y0)
	{
		int h=1, t=1;
		a[x0][y0]='.';
		q[t].x=x0;
		q[t].y=y0;
		t++;
		while(h<t)
		{
			int x=q[h].x;
			int y=q[h].y;
			for(int i=0;i<8;i++)
			{
				int nx=x+d[i][0];
				int ny=y+d[i][1];
				if(nx>=0 && nx<n && ny>=0 && ny<m && a[nx][ny]=='W')
				{
					a[nx][ny] = '.';
					q[t].x = nx;
					q[t].y = ny;
					t++;
				}
			}
			h++;
		}
	}
	int main()
	{
		int k=0;
		scanf("%d%d", &n, &m);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(a[i][j]=='W')
				{
					k++;
					bfs(i, j);
				}
		cout<<k;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
