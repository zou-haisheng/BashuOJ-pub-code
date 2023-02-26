#include<bits/stdc++.h>
using namespace std;
int f[51]={0, 1, 1, 1};
int main()
{
	int n;
	cin>>n;
	for(int i=4;i<=n;i++)
	{
		f[i] = f[i-1] + f[i-3];
	}
	cout<<f[n];
	return 0;
}