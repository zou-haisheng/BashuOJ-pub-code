#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, a[5001]={0, 1};
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		a[i] = a[i-1] + (a[i-1]-a[i-2]+i);
	}
	cout<<a[n];
	return 0;
}