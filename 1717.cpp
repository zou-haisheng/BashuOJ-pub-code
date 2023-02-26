#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, k;
	int f(int i)
	{
		int sum=0;
		while(i)
		{
			sum += i%10;
			i /= 10;
		}
		return sum;
	}
	int main()
	{
		scanf("%d", &n);
		int t=n;
		while(t)
		{
			k += t%10;
			t /= 10;
		}
		if(n%10!=0) cout<<n-1;
		else
		{
			k--;
			for(int i=n-1;i>=0;i--)
			{
				if(f(i)==k)
				{
					cout<<i;
					return 0;
				}
			}
		}
		return 0;
	}
}
int main()
{
	zhs::main();
}