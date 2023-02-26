#include<bits/stdc++.h>
using namespace std;
int f[100001]={1}, n, k;

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) 
	{
 		for(int j=max(i-k, 0);j<i;j++)
 		{
 			f[i] = (f[i] + f[j])%100003;
		}
	}
	cout<<f[n];
	return 0;
}