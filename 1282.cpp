#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, m, a[10001], tong[150];
	char s[1001];
	void dfs(int k)
	{
		if(k==m+1)
		{
			for(int i=1;i<=m;i++)
			{
				cout<<char(a[i]);
			}
			cout<<endl;
			return;
		}
		for(int i='a';i<='z';i++)
		{
			if(a[k-1]>i) continue;
			if(tong[i]==0) continue;
			a[k] = i;
			tong[i]--;
			dfs(k+1);
			tong[i]++;
		}
	}
	int main()
	{
		cin>>s>>m;
		n = strlen(s);
		for(int i=0;i<=n-1;i++)
		{
			tong[s[i]]++;
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
