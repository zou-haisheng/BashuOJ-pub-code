#include<bits/stdc++.h>
using namespace std;
int m, p, n, a[15][15], b[15][15];

int f(int i, int j)
{
	int sum=0;
	for(int k=1;k<=p;k++)
	{
		sum += a[i][k]*b[k][j];
	}
	return sum;
}

int main()
{
	cin>>m>>p>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=p;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=p;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<f(i, j)<<' ';
		}
		cout<<endl;
	}
	return 0;
}