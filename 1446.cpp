#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	#define N 15
	int m[N][N];
	bool p[N][N],l[N][N],f[N][N];
	void print()
	{
		for(int i=1; i<=9; i++)
		{
			for(int j=1; j<=9; j++)
				cout<<m[i][j];
			cout<<endl;
		}
	}
	int dfs(int x,int y)
	{
		if(m[x][y]!=0)
			if(x==9 && y==9) print();
			else if(y==9) dfs(x+1, 1);
			else dfs(x, y+1);
		else
		{
			for(int i=1;i<=9;i++)
			{
				if(!p[x][i] && !l[y][i] && !f[(x-1)/3*3+(y-1)/3+1][i]) 
				{
					p[x][i] = l[y][i] = f[(x-1)/3*3+(y-1)/3+1][i] = true;
					m[x][y] = i;
					if(x==9 && y==9) print();
					else if(y==9) dfs(x+1, 1);
					else dfs(x, y+1);
					m[x][y] = 0;
					p[x][i] = l[y][i] = f[(x-1)/3*3+(y-1)/3+1][i] = false;
				}
			}
		}
	}
	int main()
	{
		char t;
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				cin>>t;
				if(t=='?') m[i][j] = 0;
				else m[i][j] = t-'0';
				if(m[i][j])
				{
					p[i][m[i][j]] = l[j][m[i][j]] = f[(i-1)/3*3+(j-1)/3+1][m[i][j]] = true;
				}
			}
		}
		dfs(1, 1);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}