#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	string stk;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			string s;
			cin>>s;
			int top=0;
			for(int i=0;i<(int)s.length();i++)
			{
				if(s[i]=='$')
				{
					top--;
					continue;
				}
				if(s[i]=='#')
				{
					top = 0;
					continue;
				}
				stk[++top] = s[i];
			}
			for(int i=1;i<=top;i++)
			{
				cout<<stk[i];
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
