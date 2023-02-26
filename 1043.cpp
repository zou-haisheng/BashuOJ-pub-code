#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x, y, ans=1, n;
	cin>>x>>y;
	n = min(x, y);
	for(int i=2;i<=n;i++)
	{
		if(x%i==0 && y%i==0)
		{
			ans = max(ans, i);
		}
	}
	cout<<ans;
	return 0;
} 