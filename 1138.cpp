#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, m, a[101], ans;
	int main()
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					if(a[i]+a[j]+a[k]<=m && a[i]+a[j]+a[k]>ans) ans = a[i]+a[j]+a[k];
				}
			}
		}
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
}