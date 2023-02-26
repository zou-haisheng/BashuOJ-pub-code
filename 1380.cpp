#include<bits/stdc++.h>
using namespace std;
char a[2001], b[2001];
int f[2001][2001];
int n, m;

int main()
{
	scanf("%s%s", a+1, b+1);
	while(a[n+1]!='\0') n++;
	while(b[m+1]!='\0') m++;
	for(int i=0;i<=m;i++)
	{
		f[0][i] = i;
	}
	for(int i=0;i<=n;i++)
	{
		f[i][0] = i;
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			f[i][j] = min(f[i-1][j]+1, f[i][j-1]+1);
			if(a[i] == b[j]) f[i][j] = min(f[i][j], f[i-1][j-1]);
			else f[i][j] = min(f[i][j], f[i-1][j-1]+1);
		}
	}
	printf("%d", f[n][m]);
	return 0;
}