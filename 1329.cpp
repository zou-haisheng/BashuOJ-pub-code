#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	struct q{
		int x, y;
		int sum;
	}q[1000001];
	int w, h;
	int a, b;
	int v[60][60], maxn, sum;
	int x, y, dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
	void dfs()
	{
		int h=1, t=1, s=1;
		q[1]={a, b, 1};
		while(h<=t)
		{
			for(int i=0;i<=3;i++)
			{
				sum = q[h].sum;
				x = q[h].x+dx[i];
				y = q[h].y+dy[i];
				if(v[x][y]==1)
				{
					q[++t].x = x;
					q[t].y = y;
					v[x][y] = 0;
					s++;
					q[t].sum = sum+1;
					maxn = max(maxn, sum+1);
				}
			}
			h++;
		}
		cout<<s;
	}
	int main()
	{
		char ch;
		cin>>h>>w;
		for(int i=1;i<=w;i++)
		{
			for(int j=1;j<=h;j++)
			{
				cin>>ch;
				if(ch=='@')
				{
					a = i;
					b = j;
				}
				if(ch=='.') v[i][j] = 1;
			}
		}
		dfs();
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
