#include<bits/stdc++.h>
using namespace std;
int n,ans;
int a[101];
bool b[101], c[101], d[101];
void dfs(int k)
{
	if(k==n+1)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
		ans++;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0 && c[k+i]==0 && d[k-i+n]==0)
		{
			b[i]=true;
			c[k+i]=true;
			d[k-i+n]=true;
			a[k]=i;
			dfs(k+1);
			b[i] = false;
			c[k+i] = false;
			d[k-i+n] = false;
		}
	}
}
int main()
{
	cin>>n;
	dfs(1);
	if(ans==0)
	{
		cout<<"no solute!";
	}
	return 0;
}