#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, x, y;
	int a[200001];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		a[i] = a[i-1]+a[i];
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &x, &y);
		printf("%d\n", a[y]-a[x-1]);
	}
	return 0;
}