#include<bits/stdc++.h>
using namespace std;
int m, n, a[101], s, minn, p[30001];
#define maxx 0xfffffff

int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	while(true)
	{
		s++;
		p[s] = maxx;
		for(int i=1;i<=m;i++)
		{
			if(s-a[i]>=0)
			{
				if(s-a[i]==0)
				{
					if(p[s-a[i]]+1 < p[s])
					{
						p[s] = p[s-a[i]]+1;
					}
				}
				else
				{
					if(p[s-a[i]]+p[a[i]] < p[s])
					{
						p[s] = p[s-a[i]]+p[a[i]];
					}
				}
			}
		}
		if(p[s]==maxx || p[s]>n)
		{
			cout<<s-1;
			return 0;
		}
	}
	return 0;
}