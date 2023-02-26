#include<bits/stdc++.h>
using namespace std;
char a[1001], b[1001];
int n, m;
int f[1001][1001];

int main()
{
	scanf("%s%s", a+1, b+1);
	for(n=1;a[n]!='\0';)
	{
		n++;
	}
	n--;
	for(m=1;b[m]!='\0';)
	{
		m++;
	}
	m--;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j] = max(f[i][j-1], f[i-1][j]);
			if(a[i]==b[j]) f[i][j] = max(f[i][j], f[i-1][j-1]+1);
		}
	}
	cout<<f[n][m];
	return 0;
}