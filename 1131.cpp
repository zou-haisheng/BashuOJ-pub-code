#include<iostream>
#include<stdio.h>
//#include<time.h>
using namespace std;
namespace zhs{
	int n, m;
	int a[101][101], b[101][101];
	int main()
	{
		scanf("%d%d", &n, &m);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				b[j][i] = a[i][j];
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				a[i][n-j+1] = b[i][j];
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	    //printf("Time used: %.lf s\n", (double)clock() / CLOCKS_PER_SEC);
	    return 0;
	}
}
int main()
{
	zhs::main();
}