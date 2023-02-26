#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int b[1001];
	void f(int m)
	{
		int i;
		if(b[m]!=-1) return;
		b[m] = 1;
		for(i=1;i<=m/2;i++)
		{
			f(i);
			b[m] += b[i];
		}
	}
	int main()
	{
		int m;
		cin>>m;
		for(int i=1;i<=m;i++) b[i] = -1;
		f(m);
		cout<<b[m];
		return 0;
	}
}
int main()
{
	zhs::main();
}