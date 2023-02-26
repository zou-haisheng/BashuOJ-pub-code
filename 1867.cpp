#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
	int m, t, u, f, d, time;
	char s[100000];
	int main()
	{
		cin>>m>>t>>u>>f>>d;
		for(int i=1;i<=t;i++)
		{
			cin>>s[i];
			if(s[i]=='u' || s[i]=='d')
			{
				time += u+d;
			}
			else
			{
				time += f+f;
			}
			if(time>m)
			{
				cout<<i-1;
				break;
			}
			else if(time==m)
			{
				cout<<i;
				return 0;
			}
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}