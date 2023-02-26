#include<bits/stdc++.h>
using namespace std;
namespace zhs
{
    #define MAXN 105
    long long x[MAXN], y[MAXN], z[MAXN], w[MAXN];
    void input(long long a[])
	{
		string s;
		cin>>s;
		int len=s.length();
		for(int i=0;i<MAXN;i++) a[i] = 0;
		for(int i=len-1;i>=0;i--)
		{
			a[0]++;
			a[a[0]] = s[i]-'0';
		}
	}
	void output(long long a[])
	{
		for(int i=a[0];i;i--)
		{
			cout<<a[i];
		}
		cout<<'\n';
	}
    bool cmp_x(long long a[], long long b[], int x)
    {
        if(x+b[0]-1>a[0]) return false;
        if(x+b[0]-1<a[0]) return true;
        for(int i=x+b[0]-1;i>=x;i--)
        {
            if(a[i]<b[i-x+1]) return false;
            if(a[i]>b[i-x+1]) return true;
        }
        return true;
    }
    void div_long(long long c[], long long d[], long long a[], long long b[])
    {
        for(int i=0;i<MAXN;i++) c[i] = 0;
        c[0] = max(0ll, a[0]-b[0]+1);
        for(int i=0;i<MAXN;i++) d[i] = a[i];
        for(int i=c[0];i>=1;i--)
        {
            while(cmp_x(d, b, i))
            {
                for(int j=i;j<=i+b[0]-1;j++)
                {
                    d[j] -= b[j-i+1];
                    if(d[j]<0)
                    {
                        d[j] += 10;
                        d[j+1]--;
                    }
                }
                while(d[d[0]]==0 && d[0]>0) d[0]--;
                c[i]++;
            }
        }
        while(c[c[0]]==0 && c[0]>0) c[0]--;
    }
    int main()
    {
        input(x);
        input(y);
        div_long(z, w, x, y);
        output(z);
    }
}
int main()
{
    zhs::main();
    return 0;
}