#include<bits/stdc++.h>
using namespace std;
int n, a[15];
int main()
{
	cin>>n;
	int i=0;
	while(n)
	{
		a[i] = n%2;
		n /= 2;
		i++;
	}
	i--;
	for(;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
}