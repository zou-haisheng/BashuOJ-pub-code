#include<bits/stdc++.h>
using namespace std;

namespace zhs{
	int n, m, a[20];
	bool b[20];
	int f(int i,int j)
	{
		if(i==1)
		{
			return 1;
		}
		int s = a[i-1]+j;
		bool p = 1;
		for(int k=2;k<=int(sqrt(s));k++)
		{
			if(s%k==0)
			{
				p = 0;
				break;
			}
		}
		if(i==n)
		{
			s=a[1]+j;
			for(int k=2;k<=int(sqrt(s));k++)
			{
				if(s%k==0)
				{
					p = 0;
					break;
				}
			}
		}
		return p;
	}
	
	void dfs(int i)
	{
		if(i>n)
		{
			m++;
			for(int j=1;j<=n;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		else
		{	for(int j=1;j<=n;j++)
			{
				if(!b[j] && f(i,j))
				{
			    	a[i] = j;
			    	b[j] = 1;
			    	dfs(i+1);
			    	b[j] = 0;
				}
			}   
		}    
	}
	 
	int main()
	{
		cin>>n;
		dfs(1);
		if(m==0)
		{
			cout<<"NO"<<endl;
		}
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}
