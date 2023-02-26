#include<bits/stdc++.h>
using namespace std;
int n, m, v[1001], w[1001], f[1001];

int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=v[i];j--)
		{
			f[j] = max(f[j], f[j-v[i]]+w[i]);
		}
	}
	cout<<f[m];
	return 0;
}