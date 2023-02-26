#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, k, a[10];
	void dfs(int start, int last)
	{
		if(a[0]==n)	return;
		if(!last)
		{
			cout<<a[0];
			for(int i=1;i<k;i++) cout<<'+'<<a[i];
			cout<<'\n';
			return;
		}
		for(int i=start;i<=last;i++)
		{
			a[k++] = i;
			if(last>=1)	dfs(i, last-i);
			k--;
		}
	}
	
	int main()
	{
		cin>>n;
		dfs(1, n);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
