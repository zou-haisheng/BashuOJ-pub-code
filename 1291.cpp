#include<bits/stdc++.h>
using namespace std;
int f[1001]={0, 3, 7};
int main()
{
	int n;
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		f[i] = (2*f[i-1] + f[i-2]);
	}
	cout<<f[n];
	return 0;
}