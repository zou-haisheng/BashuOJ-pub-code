#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	#define MAXN 1000
	int x[MAXN], y;
	long long z[MAXN];
	void input(int a[])
	{
		string s;
		cin>>s;
		int len=s.length();
		for(int i=0;i<MAXN;i++) a[i] = 0;
		for(int i=len-1;i>=0;i-=4)
		{
			a[0]++;
			for(int j=max(0, i-3);j<=i;j++)
			{
				a[a[0]] *= 10;
				a[a[0]] += s[j]-'0';
			}
		}
	}
	void output(long long a[])
	{
		for(int i=a[0];i;i--)
		{
			if(i==a[0]) cout<<a[i];
			else
			{
				int tmp=1000;
				for(int j=1;j<=4;j++)
				{
					cout<<a[i]/tmp%10;
					tmp /=10;
				}
			}
		}
		cout<<'\n';
	}
	void mul_short(long long c[], int a[], int b)
	{
		for(int i=0;i<MAXN;i++) c[i] = 0;
		c[0] = a[0];
		for(int i=1;i<=a[0];i++)
			c[i] = (long long)a[i]*b;
		for(int i=1;i<=a[0];i++)
		{
			c[i+1] += c[i]/10000;
			c[i] %= 10000;
		}
		while(c[c[0]+1]>0)
		{
			c[0]++;
			c[c[0]+1] += c[c[0]]/10000;
			c[c[0]] %= 10000;
		}
	}
	int main()
	{
		input(x);
		cin>>y;
		mul_short(z, x, y);
		output(z);
		return 0;
	}
}
int main()
{
	zhs::main();
}