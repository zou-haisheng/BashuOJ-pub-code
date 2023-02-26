#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	#define maxn 1001
	int ax, ay, bx, by;
	int a[maxn][maxn];
	int dx[12]={1, 2, 2, 1, -1, -2, -2, -1, 2, 2, -2, -2};
	int dy[12]={-2, -1, 1, 2, -2, -1, 1, 2, -2, 2, -2, 2};
	int s, t;
	struct node
	{
		int x,y,step;
	}c[100001];
	void bfs()
	{
		node neww;
		memset(a, -1, sizeof(a));
		s = 1;
		t = 1;
		c[1] = {1, 1, 0};
		a[1][1] = 0;
		while(s<=t)
		{
			for(int i=0;i<12;i++)
			{
				neww = {c[s].x+dx[i], c[s].y+dy[i], c[s].step};
				if(neww.x>=1 && neww.x<=100 && neww.y>=1 && neww.x<=100 && a[neww.x][neww.y]==-1)
				{
					t++;
					c[t] = neww;
					c[t].step++;
					a[neww.x][neww.y]=c[t].step;
				}
				if(a[ax][ay]>=0 && a[bx][by]>=0)
				{
					cout<<a[ax][ay]<<endl<<a[bx][by];
					return ;
				}
			}
			s++;
		}
	}
	int main()
	{
		scanf("%d%d%d%d", &ax, &ay, &bx, &by);
		bfs();
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
