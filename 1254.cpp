#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a[1001];
	int b[1001];
	int c[1001];
	int main()
	{
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=q;i++)
		{
			cin>>b[i]>>c[i];
			int min=10000001;
			int sum=pow(10,b[i]);
			for(int j=1; j<=n; j++)
			{
				if(a[j]%sum==c[i]&&a[j]<min) min=a[j];
			}
			if(min!=10000001) cout<<min<<endl;
			else cout<<-1<<endl;
		}	
	}
}
int main()
{
	zhs::main();
}