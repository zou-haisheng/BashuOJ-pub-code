#include<bits/stdc++.h>
using namespace std;
int n, m, r, c, sum;
int a[3001][3001], s[3001][3001];
int main()
{
	cin>>n>>m>>r>>c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			s[i][j] = s[i][j-1] + s[i-1][j] -s[i-1][j-1]+a[i][j];
		}
	}
	for(int i=r;i<=n;i++)
	{
		for(int j=c;j<=m;j++)
		{
			sum = max(s[i][j] - s[i][j-c] - s[i-r][j] + s[i-r][j-c], sum);
		}
	}
	cout<<sum;
	return 0;
}