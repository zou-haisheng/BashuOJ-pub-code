#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int stk[200001], maxx[200001];
	int main()
	{
		int n;
		cin>>n;
		int top=0;
		for(int i=1;i<=n;i++)
		{
			int ty;
			cin>>ty;
			if(ty==0)
			{
				int x;
				cin>>x;
				stk[++top] = x;
				maxx[top] = max(maxx[top-1], stk[top]);
				continue;
			}
			if(ty==1)
			{
				if(top==0) continue;
				stk[top] = maxx[top] = 0;
				top--;
				continue;
			}
			if(ty==2)
			{
				cout<<maxx[top]<<'\n';
				continue;
			}
		}
	 	return 0;
	}
}

int main()
{
 	zhs::main();
}
