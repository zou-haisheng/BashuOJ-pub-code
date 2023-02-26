#include<iostream>
using namespace std;
long long f[1001][900];
int n,m;
void gj(long long a[],long long b[],long long c[])
{
	c[0] = max(a[0],b[0]);
	for(int i=1;i<=c[0];i++) c[i] = a[i]+b[i];
	for(int i=1;i<=c[0];i++)
	{
		c[i+1] += c[i]/10;
		c[i] %= 10;
	}
	if(c[c[0]+1]) c[0]++;
}
int main()
{
	cin>>n>>m; 
	f[n][1] = f[n][0]=1;
	f[n+1][1] = f[n+1][0]=1;
	for(int i=n+2;i<=m;i++)
		{
			gj(f[i-1],f[i-2],f[i]);
		}
	for(int i=f[m][0];i>=1;i--) cout<<f[m][i];
	return 0;
}