#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
    #define MAXN 1000
    long long x[MAXN], y[MAXN], z[MAXN];
    void input(long long a[])
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
    void mul_long(long long c[], long long a[], long long b[])
    {
        for(int i=0;i<MAXN;i++) c[i] = 0;
        c[0] = a[0]+b[0];
        for(int i=1;i<=a[0];i++)
        {
            for(int j=1;j<=b[0];j++)
            {
                c[i+j-1] += a[i]*b[j];
            }
        }
        for(int i=1;i<=c[0];i++)
        {
            c[i+1] += c[i]/10000;
            c[i] %= 10000;
        }
        while(c[c[0]]==0 && c[0]>0) c[0]--;
    }
    int main()
    {
        input(x);
        input(y);
        mul_long(z, x, y);
        output(z);
        return 0;
    }
}
int main()
{
    zhs::main();
    return 0;
}