#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int n, v, s, ans, a[1001];
	int main()
	{
		cin>>n>>v;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
			for(int j=i;j<=n;j++)
				if(a[i]>=a[j]) swap(a[i], a[j]);
		for(int i=1;i<=n;i++)
		{
			s += a[i];
			if(s>v) break;
			ans++;
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
