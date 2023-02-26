#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	long long s=0;
	char a[101][101],b[101][101];
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
		b[i][j]=a[i][j];
	}
	cin>>m;
	for(int k=1;k<m;k++)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='@')
				{
					if(a[i+1][j]=='.') b[i+1][j]='@';
					if(a[i-1][j]=='.') b[i-1][j]='@';
					if(a[i][j+1]=='.') b[i][j+1]='@';
					if(a[i][j-1]=='.') b[i][j-1]='@';
				}
			}	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				a[i][j]=b[i][j];
			}	
		}		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(b[i][j]=='@')s++;
		}
	}
	cout<<s;
	return 0;
}