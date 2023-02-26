#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[10001], b[10001], g[10001], k[10001];
	int i, n, x, y, judge;
	int main()
	{
		cin>>n;
		for(i=1;i<=n;i++)
		scanf("%d%d%d%d", &a[i], &b[i], &g[i], &k[i]);
		cin>>x>>y;
		for(i=1;i<=n;i++)
			if(a[i]<=x&&a[i]+g[i]>=x&&b[i]<=y&&b[i]+k[i]>=y)
				judge = i;
		if(!judge) cout<<-1;
		else cout<<judge;
		return 0;
	}
}
int main()
{
	zhs::main();
}