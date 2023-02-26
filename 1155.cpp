#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, m;
	char c[105][105];
	int x[10]={0, 1, -1, 0, 0, 1, 1, -1, -1};
	int y[10]={0, 0, 0, -1, 1, -1, 1, -1, 1};
	int main()
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>c[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(c[i][j]!='*')
				{
					c[i][j] = '0';
					for(int k=1;k<=8;k++)
					{
						c[i][j] += c[i+x[k]][j+y[k]]=='*'?1:0;
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout<<c[i][j];
			}
			cout<<'\n';
		}
		return 0;
	}
}
int main()
{
	zhs::main();
}