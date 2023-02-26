#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int n, x, ans;
	int main()
	{
		scanf("%d%d", &n, &x);
		for(int i=1;i<=n;i++)
		{
			int t=i;
			while(t)
			{
				if(t%10==x) ans++;
				t /= 10;
			}
		}
		printf("%d", ans);
		return 0;
	}
}

int main()
{
	zhs::main();
}