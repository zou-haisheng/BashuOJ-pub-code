#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int a, n, p;
	long long quick_pow(int a, int x)
	{
		long long ans=1;
		long k=a;
		while(x>0)
		{
			if(x%2==1) ans = ans*k%p;
			x /= 2;
			k = k*k%p;
		}
		return ans;
	}
	int main()
	{
		scanf("%d%d%d", &a, &n, &p);
		cout<<quick_pow(a, n)%p;
		return 0;
	}
}

int main()
{
	zhs::main();
}