#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int stk[1001], a[1001];
	long long cal(int x, int y, int b)
	{
		if(b==-3) return x+y;
		if(b==-4) return x-y;
		if(b==-5) return x*y;
		if(b==-6) return x/y;
		if(b==-7)
		{
			int ans=1;
			for(int i=1;i<=y;i++)
			{
				ans *= x;
			}
			return ans;
		}
	}
	bool Check(int x, int y)
	{
		if(y==-2)
		{
			if(x<=-3) return 1;
		}
		if(y==-3 || y==-4)
		{
			if(x<=-3) return 1;
		}
		if(y==-5 || y==-6)
		{
			if(x<=-5) return 1;
		}
		if(y==-7)
		{
			if(x<=-7) return 1;
		}
		return 0;
	}
	int main()
	{
		string s;
		cin>>s;
		int n=0;
		a[++n] = -1;
		int i=0;
		while(i<s.length())
		{
			if(s[i]>='0' && s[i]<='9')
			{
				long long x=0;
				while(i<s.length() && (s[i]>='0' && s[i]<='9'))
				{
					x = x*10 + s[i]-'0';
					i++;
				}
				a[++n] = x;
				continue;
			}
			if(s[i]=='(') a[++n] = -1;
			if(s[i]==')') a[++n] = -2;
			if(s[i]=='+') a[++n] = -3;
			if(s[i]=='-') a[++n] = -4;
			if(s[i]=='*') a[++n] = -5;
			if(s[i]=='/') a[++n] = -6;
			if(s[i]=='^') a[++n] = -7;
			i++;
		}
		a[++n] = -2;
		int top=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>=-1)
			{
				stk[++top] = a[i];
				continue;
			}
			long long y=stk[top--];
			while(top>0 && Check(stk[top], a[i]))
			{
				int b=stk[top--];
				long long x=stk[top--];
				y = cal(x, y, b);
			}
			if(a[i]==-2) top--;
			stk[++top] = y;
			if(a[i]!=-2) stk[++top] = a[i];
		}
		cout<<stk[top]<<'\n';
		return 0;
	}
}

int main()
{
	zhs::main();
}