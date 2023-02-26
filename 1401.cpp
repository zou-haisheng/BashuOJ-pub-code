#include <bits/stdc++.h>
using namespace std;
namespace zhs
{
	string s;
int len;
int sol(int l, int r)
{
	int ans=0, sign=0;
	if(r<l) return 0;
	for(int i=l+1;i<=r-1;i++)
	{
		if(s[i]=='(') sign++;
		if(s[i]==')') sign--;
	}
	if(sign==0 && s[l]=='(' && s[r]==')') return sol(l+1, r-1);
	sign = 0;
	int bj[260], st[260], en[260], cnt=0;
	st[1] = l;
	bj[1] = ((s[l]=='-')?-1:1);
	for(int i=l;i<=r;i++)
	{
		if(s[i]=='(') sign++;
		if(s[i] ==')') sign--;
		if(sign==0)
		{
			if(s[i]=='+')
			{
				cnt++;
				en[cnt] = i-1;
				st[cnt+1] = i+1;
				bj[cnt+1] = 1;
			}
			if(s[i]=='-')
			{
				cnt++;
				en[cnt] = i-1;
				st[cnt+1] = i+1;
					bj[cnt+1] = -1;
				}
			}
		}
		if(cnt)
		{
			cnt++;
			en[cnt] = r;
			for(int i=1;i<=cnt;i++)
				ans += sol(st[i], en[i])*bj[i];
			return ans;
		}
		bj[1] = 3;
		st[1] = l;
		sign = cnt = 0;
		for(int i=l;i<=r;i++)
		{
			if(s[i]=='(') sign++;
			if(s[i]==')') sign--;
			if(sign==0)
			{
				if(s[i]=='*')
				{
					cnt++;
					en[cnt] = i-1;
					st[cnt+1] = i+1;
					bj[cnt+1] = 3;
				}
				if(s[i]=='/')
				{
					cnt++;
					en[cnt] = i-1;
					st[cnt+1] = i+1;
					bj[cnt+1] = 4;
				}
			}
		}
		if(cnt)
		{
			cnt++;
			en[cnt] = r;
			ans = sol(st[1], en[1]);
			for(int i=2;i<=cnt;i++)
			{
				if(bj[i]==3)
					ans = ans*sol(st[i], en[i]);
				if(bj[i]==4)
					ans = ans/sol(st[i], en[i]);
			}
			return ans;
		}
		for(int i=l;i<=r;i++)
			ans = ans*10 + s[i] - '0';
		return ans;
	}
	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		cin>>s;
		len = s.length();
		s = ' '+s;
		cout<<sol(1, len)<<'\n';
		return 0;
	}
}

int main()
{
	zhs::main();
	return 0;
}