#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];

int main()
{ 
	int m,n;
	cin>>m>>n;
	a[1][1] = 1;
	for(int i=1;i<=n;i++)
	{
		a[1][i] = 1;
	}
	for(int i=1;i<=m;i++)
	{
		a[i][1] = 1;
	}
	for(int i=2;i<=m;i++)
		for(int j=2;j<=n;j++)
			a[i][j] = a[i-1][j]+a[i][j-1];
	cout<<a[m][n];
}