#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int b[101], n, sum;
	int main()
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		for(int i=1;i<=n;i++)
		{
			cout<<b[i]*i-sum<<' ';
			sum = b[i]*i;
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}