#include<bits/stdc++.h>
using namespace std;
int n;

bool f(int k)
{
	for(int i=2;i*i<=k;i++)
	{
		if(k%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cin>>n;
	for(int i=2;i<=n-2;i++)
	{
		if(f(i) && f(n-i))
		{
			cout<<i<<'+'<<n-i;
			return 0;
		}
	}
	return 0;
}