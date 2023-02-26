#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, a[50001];
	int main()
	{
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	    	cin>>a[i];
		}
		sort(a+1, a+n+1);
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<'\n';
		for(int i=n;i>=1;i--)
		{
			cout<<a[i]<<' ';
		}
	    return 0;
	}
}
int main()
{
	zhs::main();
}