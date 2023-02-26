#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, a[10001], bj[10001], sum;
	char s[1001];
	void dfs(int k)
	{
		if(k==n+1)
		{
			cout<<++sum<<":";
			for(int i=1;i<=n;i++)
			{
				cout<<char(a[i]);
			}
			cout<<endl;
			return;
		}
		for(int i=1;i<=n;i++)
		{
			if(bj[i]==1) continue;
			a[k] = s[i-1];
			bj[i] = 1;
			dfs(k+1);
			bj[i] = 0;
		}
	}
	int main()
	{
		cin>>s;
		n = strlen(s);
		sort(s, s+n);
		dfs(1);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
