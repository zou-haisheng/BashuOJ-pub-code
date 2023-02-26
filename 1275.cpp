#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, r, a[21], tong[21];

	void dfs(int k)
	{
		if(k==r+1)
		{
			for(int i=1;i<=r;i++)
			{
				cout<<a[i]<<' ';
			}
			cout<<endl;
			return;
		}
		for(int i=1;i<=n;i++)
		{
			if(a[k-1]>i) continue;
			if(tong[i]==0) continue;
			a[k] = i;
			tong[i]--;
			dfs(k+1);
			tong[i]++;
		}
		return;
	}
	
	int main()
	{
		cin>>n>>r;
		for(int i=1;i<=n;i++)
		{
			tong[i]++;
		}
		dfs(1);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
