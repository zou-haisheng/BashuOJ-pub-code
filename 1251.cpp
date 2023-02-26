#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int stk[1001];
	string s;
	int judge[1001];
	int main()
	{
		while(cin>>s)
		{
			int top=0;
			memset(judge, 0, sizeof(judge));
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='(') stk[++top] = i;
				if(s[i]==')')
				{
					if(top!=0) top--;
					else judge[i] = 2;
				}
			}
			for(int i=1;i<=top;i++) judge[stk[i]] = 1;
			cout<<s<<'\n';
			for(int i=0;i<s.length();i++)
			{
				if(judge[i]==0) cout<<' ';
				else if(judge[i]==1) cout<<'$';
				else if(judge[i]==2) cout<<'?';
			}
			cout<<'\n';
		}
		return 0;
	}
}

int main()
{
	zhs::main();
}