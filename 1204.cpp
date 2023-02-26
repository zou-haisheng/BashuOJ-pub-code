#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int arr[101];
	long double jc(long long n)
	{
		long double x=1;
		for(int i=1;i<=n;i++)x *= i;
		return x;
	}
	int main()
	{
		int n;
		cin>>n;
		long long a=jc(2*n)/(jc((2*n-n))*jc(n));
		cout<<a/(n+1)<<endl;
		return 0;
	}
}

int main()
{
	zhs::main();
}