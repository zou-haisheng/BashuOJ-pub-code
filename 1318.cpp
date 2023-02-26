#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, out[101], stk[101];
	string s;
	int main()
	{
		cin>>n>>s;
		int now=1, top=0;
		int k=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='A')
			{
				out[++k] = now++;
				continue;
			}
			if(s[i]=='B')
			{
				stk[++top] = now++;
				if(top>5)
				{
					cout<<"No"<<'\n';
					return 0;
				}
				continue;
			}
			if(s[i]=='C')
			{
				if(top==0)
				{
					cout<<"No"<<'\n';
					return 0;
				}
				out[++k] = stk[top--];
				continue;
			}
		}
		cout<<"Yes"<<'\n';
		for(int i=1;i<=k;i++)
		{
			cout<<out[i]<<'\n';
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}