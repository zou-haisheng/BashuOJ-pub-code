#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[5], b[5];
	int main()
	{
		for(int i=1;i<=4;i++)
		{
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b+1, b+5);
		for(int i=1;i<=4;i++) cout<<b[i]<<' ';
		cout<<'\n';
		for(int i=1;i<=4;i++)
		{
			if(a[i]!=b[i]) cout<<i<<' ';
		}
		return 0;
	}
}
int main()
{
	zhs::main();
}