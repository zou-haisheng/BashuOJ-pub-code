#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int n, m;
	bool b[1001];
	int main()
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			int t;
			scanf("%d", &t);
			if(!b[t]) m++;
			b[t] = true;
		}
		printf("%d\n", m);
		for(int i=1;i<=1000;i++)
			if(b[i]) printf("%d ", i);
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
