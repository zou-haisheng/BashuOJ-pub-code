#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
void get(int &x)
{
	char c=getchar();
	x = 0;
	while(c<'0'||c>'9')
	{
		c = getchar();
	}
	while(c<='9'&&c>='0')
	{
		x = x*10+c-48;
		c = getchar();
	}
}
int main()
{
	int n, k, f[10001], x, l, r, mid, i;
	get(n);
	get(k);
	for(i=1;i<=n;i++)
	{
		cin>>f[i];
	}
	for(i=1;i<=k;i++)
	{
		get(x);
		l = 1;
		r = n;
		while(l<=r)
		{
			mid = (l+r)/2;
			if(x==f[mid])
			{
				cout<<mid<<endl;
				break;
			}
			if(x>f[mid]) r = mid-1;
			else l = mid+1;
		}
	}
	return 0;
}