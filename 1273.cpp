#include<bits/stdc++.h>
using namespace std;
long long a[1003][1003],az[1003][1003];
int n,m,x,y;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		az[x][y]=1;
	}
	a[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) 
		{
			if(az[i][j]==1)
			{
				a[i][j]=0;
			}
			else
			{
				a[i][j]+=a[i-1][j]+a[i][j-1];
				a[i][j]%=100003;
			}
		}
	}
   cout<<a[n][n];
   return 0;
}