#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	#define MAXN 10000
	int x[MAXN], y[MAXN], z[MAXN];
	void input(int a[], bool &jud)
	{
		string s;
		jud = false;
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
	void output(int a[], bool jud)
	{
		if(jud) cout<<'-';
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
	int cmp(int a[], int b[])
	{
		if(a[0]>b[0]) return 1;
		if(a[0]<b[0]) return -1;
		for(int i=a[0];i>=1;i--)
		{
			if(a[i]>b[i]) return 1;
			if(a[i]<b[i]) return -1;
		}
		return 0;
	}
	void sub(int c[], int a[], int b[], bool &jud)
	{
		for(int i=0;i<MAXN;i++) c[i] = 0;
		if(cmp(a, b)==-1)
		{
			jud = true;
			for(int i=0;i<MAXN;i++) swap(a[i], b[i]);
		}
		else jud = false;
		c[0] = a[0];
		for(int i=1;i<=c[0];i++)
		{
			c[i] = a[i];
			if(i<=b[0]) c[i] -= b[i];
		}
		for(int i=1;i<=c[0];i++)
		{
			if(c[i]<0)
			{
				c[i] += 10000;
				c[i+1] -= 1;
			}
		}
		while(c[c[0]]==0 && c[0]>1) c[0]--;
	}
	int main()
	{
		bool judge_x, judge_y, judge_z;
		input(x, judge_x);
		input(y, judge_y);
		sub(z, x, y, judge_z);
		output(z, judge_z);
		return 0;
	}
}

int main()
{
	zhs::main();
}