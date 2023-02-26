#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, a[10001], tong[150], sum;
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
		for(int i='a';i<='z';i++)
		{
			if(tong[i]==0) continue;
			a[k] = i;
			tong[i]--;
			dfs(k+1);
			tong[i]++;
		}
	}
	int main()
	{
		cin>>s;
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
