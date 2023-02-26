#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, h[100001], stk[100001];
	int main()
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++) scanf("%d", &h[i]);
		int top=0, ans=n;
		stk[++top] = h[1];
		for(int i=2;i<=n;i++)
		{
			while(top>0 && stk[top]>=h[i])
			{
				if(stk[top]==h[i]) ans--;
				top--;
			}
			stk[++top] = h[i];
		}
		cout<<ans;
		return 0;
	}
}

int main()
{
	zhs::main();
}