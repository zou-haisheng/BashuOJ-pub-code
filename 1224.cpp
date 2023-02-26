#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, m, a, b;
	int main()
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(i==j) a += (n-i+1)*ceil(m-j+1);
				else b += (n-i+1)*(m-j+1);
			}
		}
		cout<<a<<' '<<b;
		return 0;
	}
}
int main()
{
	zhs::main();
}