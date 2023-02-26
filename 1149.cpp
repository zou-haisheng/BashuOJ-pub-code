#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int ans, a[10001], b[10001], c[10001], bj[10001], n;
	int cal_left(int x, int y)
	{
		if(x>=y) return x-y;
		return (n-1)+y-x;
	}
	int cal_right(int x, int y)
	{
		return x+y;
	}
	void dfs(int now)
	{
		if(now==n+1)
		{
			ans++;
			if(ans<=3)
			{
				for(int i=1;i<=n;i++)
					cout<<a[i]<<' ';
				cout<<'\n';
			}
			return;
		}
		for(int i=1;i<=n;i++)
		{
			if(bj[i]!=0) continue;
			int l, r;
			l = cal_left(now, i);
			r = cal_right(now, i);
			if(b[l] || c[r]) continue;
			a[now] = i;
			bj[i] = b[l] = c[r] = 1;
			dfs(now+1);
			a[now] = 0;
			bj[i] = b[l] = c[r] = 0;
		}
	}
	int main()
	{
		scanf("%d", &n);
		dfs(1);
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
