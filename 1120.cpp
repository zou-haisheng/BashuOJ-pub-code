#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int fun(long long i, long long j)
	{
		int k, p;
		for(k=0;i;k++)
			i = i/10;//位数 
		for(p=0;j;p++)
			j = j/10;//位数 
		if(k<p) k = p;
		return k;
	}
	int main()
	{	
		int x, s=1000;
		long long n, j, i;
		cin>>n;
		for(i=1;i<=sqrt(n);i++)
		{
			if(n%i!=0) continue;
			j = n/i;
			x = fun(i, j);
			if(x<s) s = x;
		}
		cout<<s;
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
