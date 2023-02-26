#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int ans, flag, limit;
	int n, m;
	int belong[10001];
	int a[61];
	bool cmp(int x, int y)
	{
		return x>y;
	}
	void dfs(int now, int len, int last)
	{
		if(flag==1) return;
		if(now==limit+1)
		{
			flag = 1;
			return;
		}
		if(len==ans)
		{
			dfs(now+1, 0, 0);
			return;
		}
		int pre=-1;
		for(int i=last+1;i<=n;i++)
		{
			if(belong[i]!=0) continue;
			if(len+a[i]>ans) continue;
			if(pre==a[i]) continue;
			belong[i] = now;
			dfs(now, len+a[i], i);
			belong[i] = 0;
			if(flag==0) pre=a[i];
			if(flag==0 && last==0) return;
		}
	}
	int main()
	{
		scanf("%d", &n);
		int maxx=0, sum=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			maxx = max(a[i], maxx);
			sum += a[i];
		}
		sort(a+1, a+n+1, cmp);
		ans = a[1]-1;
		while(ans<sum)
		{
			ans++;
			if(sum%ans!=0) continue;
			limit = sum/ans;
			dfs(1, 0, 0);
			if(flag) break;
		}
		cout<<ans;
	 	return 0;
	}
}

int main()
{
 	zhs::main();
}
