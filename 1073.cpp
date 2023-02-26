#include<iostream>
using namespace std;
int n,m[20][20],b,x=0;
bool pd;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>m[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		
		x=m[i][1];
		b=1;
		for(int j=2;j<=n;j++)
		{
			if(m[i][j]<x)
			{
				x=m[i][j];
				b=j;
			}
		}
		pd=false;
		for(int j=1;j<=n;j++)
		{
			if(x<m[j][b])
			{
				pd=1;
				break;
			}
		}
		
		if(!pd)
		{
			cout<<"("<<i<<","<<b<<")"<<"\n";
		}
	}
	return 0;
}