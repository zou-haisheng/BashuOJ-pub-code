#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	long long n, a[100001], k;
	int main()
	{
		scanf("%ld", &n);
		for(int i=1;i<=n;i++) scanf("%ld", &a[i]);
		scanf("%ld", &k);
		sort(a+1, a+n+1);
		for(int i=1;i<=k;i++)
		{
			printf("%ld\n", a[n-i+1]);
		}
		return 0;
	}
}
int main()
{
	zhs::main();
}