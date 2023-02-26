#include<bits/stdc++.h>
using namespace std;
int n,f[1001]={1,1,2};
int main()
{
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		for(int j=0;j<i-1;j++)
		{
			f[i]=(f[i]+f[j]*f[i-j-2])%12345;
		}
		f[i]+=f[i-1];
		f[i]%=12345;
	}
	cout<<f[n]%12345<<'\n';
	return 0;
}
