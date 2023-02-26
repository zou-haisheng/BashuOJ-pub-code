#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int out[5001];
	int main()
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>out[i];
		for(int i=1;i<=n;i++)
		{
			int now=out[i];
			for(int j=i+1;j<=n;j++)
			{
				if(out[j]<out[i])
				{
					if(out[j]>now)
					{
						cout<<"NO"<<'\n';
						return 0;
					}
					now = out[j];
				}
			}
		}
		cout<<"YES"<<'\n';
		return 0;
	}
}

int main()
{
	zhs::main();
}