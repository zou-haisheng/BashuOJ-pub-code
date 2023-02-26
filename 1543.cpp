#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[1000005], b[1000005];
	int main()
	{
		int n, top=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]<=a[i-1] && a[i]>b[i-1])
			{
				b[i] = b[i-1];
				continue;
			}
			for(int j=i;j>=1;j--)
			{
				if(a[j]<a[i])
				{
					b[i] = a[j];
					break;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			cout<<b[i]<<" ";
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}