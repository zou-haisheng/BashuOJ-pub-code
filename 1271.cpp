#include<bits/stdc++.h>
using namespace std;
int a[1001][1001], f[1001][1001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=1&&j!=1) f[i][j] = min(f[i][j-1], f[i-1][j]) + a[i][j];
			else f[i][j]=a[i][j]+f[i-1][j]+f[i][j-1];
		}
	}
	cout<<f[n][n];
	return 0;
}