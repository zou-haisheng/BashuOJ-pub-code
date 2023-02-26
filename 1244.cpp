#include<bits/stdc++.h>
using namespace std;

long long f(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	return (n-1)*(f(n-1)+f(n-2));
}

int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
} 