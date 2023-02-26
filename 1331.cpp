#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int main()
	{
		int l, n, m, d[50001];
		bool flag=true;
		cin>>l>>n>>m;
		d[0] = 0;
		d[n+1] = l;
		for(int i=1;i<=n;i++)
		{
			cin>>d[i];
		}
		int left=1, right=l+1;
		while(left+1<right)
		{
			int mid=(left+right)/2;
			int a=0, b=0;
			for(int j=1;j<=n+1;j++)
			{
				if((d[j]-b)<mid) a++;
				else b = d[j];
			}
			if(a<=m) left = mid;
			else right = mid;
		}
		cout<<left;
		return 0;
	}
}
int main()
{
	zhs::main();
}