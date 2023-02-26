#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,f[3001],g[3001];
	cin>>n;
	if(n==1)
	{
		cout<<"Jolly"<<endl;
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		cin>>f[i];
	}
	for(i=1;i<n;i++)	
	{
		g[i]=(f[i]-f[i+1]);
		if(g[i]<0)g[i]*=(-1);
	}
	sort(g,g+n);
	for(i=1;i<n-1;i++)
	{
		if((g[i]+1!=g[i+1])||g[i]==0)
		{
			cout<<"Not jolly";
			return 0;
		}
	}
	if(g[n-2]+1!=g[n-1]) cout<<"Not jolly";
	else cout<<"Jolly"<<endl;
	return 0;
}