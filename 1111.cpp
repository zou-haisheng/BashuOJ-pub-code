#include<iostream>
using namespace std;
int main()
{
	int m,n,i,c,a[5000]={0};
	cin>>n>>m;
	cout<<1; 
	for(i=1;i<=m;i++)
	{
		for(c=1;c<=n;c++)
		{
			if(c%i==0&&a[c]==0)a[c]=1;
			else if(c%i==0&&a[c]==1)a[c]=0;
		}
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]==1)cout<<","<<i;
	}
}