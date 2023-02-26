#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	#define N 200000
	#define min(a,b) (a<b?a:b)
	#define max(a,b) (a>b?a:b)
	#define ll long long
	#define INF_INT 0x3f3f3f3f
	int n, k, m, ans=-INF_INT;
	int a[N], t[N<<2], sum[N];
	void build()
	{
		for(m=1;m<=n-1;m<<=1);
		for(int i=1;i<=n;i++) t[i+m] = sum[i];
		for(int i=m;i;i--) t[i] = min(t[i<<1], t[i<<1|1]);
	}
	inline int ask(int l,int r)
	{
		l--;
		r++;
		l += m;
		r += m;
		int ans=INF_INT;
		for(;l^r^1;l>>=1,r>>=1)
		{
			if(~l&1) ans = min(ans, t[l^1]);
			if(r&1) ans = min(ans, t[r^1]);
		}
		return ans;
	}
	int main()
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum[i] = sum[i-1]+a[i];
		}
		build();
		for(int i=1;i<=n;i++)
		{
			int l=max(i-k, 0), r=i-1;
			ans = max(ans, sum[i]-ask(l, r));
		}
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
