#include<cstdio>
int a[15][15], yet;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<2*n;i++)
	{
		for(int j=(i&1)?(i<n?i:n-1):(0>i-n?0:i-n+1);(i&1)?(~j&&j>i-n):(j<n&&j<=i);(i&1)?(--j):(++j))
		{
			a[j][i-j] = ++yet;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		putchar(10);
	}
	return 0;
}