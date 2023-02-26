#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int a[25][25],n=1,m=1,s=0;
	char ch;
	void f(int m,int n)
	{
		if(m==0&&n==0)return;
		int s=0,i,j,k,x,y;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				cin>>ch;
				if(ch=='.') a[i][j]=0;
				if(ch=='#') a[i][j]=-1;
				if(ch=='@') a[i][j]=1;
			}
		for(k=1;k<=10000;k++)
			for(i=1;i<=n;i++)
				for(j=1;j<=m;j++)
				{
					if(a[i][j]==k&&a[i-1][j]==0) a[i-1][j]=k+1;
					if(a[i][j]==k&&a[i+1][j]==0) a[i+1][j]=k+1;
					if(a[i][j]==k&&a[i][j-1]==0) a[i][j-1]=k+1;
					if(a[i][j]==k&&a[i][j+1]==0) a[i][j+1]=k+1;
				}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j]>0)s++;
			}
		}	
		cout<<s<<endl;
	}
	int main()
	{
		while(m!=0&&n!=0)
		{
			cin>>m>>n;
			f(m,n);
		}
	}
}

int main()
{
	zhs::main();
	return 0;
}