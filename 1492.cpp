#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n;
	int L;
	int bj[1001][1001];
	int dis[1001][1001];
	int dx[8]={1, 1, -1, -1, 2, 2, -2, -2};
	int dy[8]={2, -2, 2, -2, 1, -1, 1, -1};
	struct node
	{
		int x, y;
	}que[10001];
	void bfs(node p1, node p2)
	{
		if(p1.x==p2.x && p1.y==p2.y)
		{
			cout<<0<<'\n';
			return;
		}
		int l, r;
		l = r = 0;
		que[++r] = p1;
		que[++r] = p2;
		for(int i=0;i<L;i++)
		{
			for(int j=0;j<L;j++)
			{
				dis[i][j] = INT_MAX;
			}
		}
		dis[p1.x][p1.y] = dis[p2.x][p2.y] = 0;
		memset(bj, 0, sizeof(bj));
		bj[p1.x][p1.y] = 1;
		bj[p2.x][p2.y] = dis[p2.x][p2.y] = 0;
		memset(bj, 0, sizeof(bj));
		bj[p1.x][p1.y] = 1;
		bj[p2.x][p2.y] = 2;
		while(l<r)
		{
			node now=que[++l];
			for(int i=0;i<8;i++)
			{
				node tmp={now.x+dx[i], now.y+dy[i]};
				if(tmp.x<0||tmp.x>=L||tmp.y<0||tmp.y>=L) continue;
				if(bj[tmp.x][tmp.y]!=0 && bj[tmp.x][tmp.y]!=bj[now.x][now.y])
				{
					cout<<dis[tmp.x][tmp.y]+dis[now.x][now.y]+1<<'\n';
					return;
				}
				if(dis[tmp.x][tmp.y]!=INT_MAX) continue;
				dis[tmp.x][tmp.y] = dis[now.x][now.y]+1;
				bj[tmp.x][tmp.y] = bj[now.x][now.y];
				que[++r] = tmp;
			}
		}
	}
	int main()
	{
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &L);
			node s, e;
			scanf("%d%d", &s.x, &s.y);
			scanf("%d%d", &e.x, &e.y);
			bfs(s, e);
		}
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
