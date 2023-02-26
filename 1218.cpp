#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, k, s, a=1;
	int main()
	{
		scanf("%d",&n);
		while(s<n)
		{
			k++;
			s+=k;
		}
		int t=k;
		s -= n;
		k -= s;
		a += s;
		if(t%2==0) printf("%d/%d", k, a);
		else printf("%d/%d", a, k);
		return 0;
	}
}
int main()
{
	zhs::main();
}