#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n,a[20],v[20][20],b[20][20],top,ans=30;
	int gcd(int a,int b)
	{
		if(!b) return a;
		return gcd(b, a%b);
	}
	void dfs(int sum)
	{
		if(sum>n)
		{
			ans = min(ans, top);
			return;
		}
		for(int i=1;i<=top;i++)
		{
			bool pd=true;
			for(int j=1;j<=b[i][0];j++)
			{
				if(!v[sum][b[i][j]]) {
					pd = false;
					break;
				}
			}
			if(pd)
			{
				b[i][++b[i][0]] = sum;
				dfs(sum + 1);
				b[i][0]--;
			}
		}
		b[++top][0] = 1;
		b[top][1] = sum;
		dfs(sum+1);
		top--;
	}
	int main()
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(gcd(a[i], a[j])==1)
				{
					v[i][j] = v[j][i] = 1;
				}
			}
		}
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