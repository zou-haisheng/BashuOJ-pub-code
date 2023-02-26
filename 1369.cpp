#include<bits/stdc++.h>
using namespace std;
int n, m;
int v[201][201], w[201][201], s[201];
int f[201];
int main()
{
	int t, a, b, c;
	cin>>m>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		v[c][s[c]] = a;
		w[c][s[c]] = b;
		s[c]++;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=0;j--)
		{
			for(int k=0;k<s[i];k++)
			{
				if(v[i][k]<=j) f[j] = max(f[j], f[j-v[i][k]]+w[i][k]);
			}
		}
	}
	cout<<f[m];
	return 0;
}