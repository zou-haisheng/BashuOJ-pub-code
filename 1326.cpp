#include<bits/stdc++.h>
using namespace std;
namespace zhs{
	int n, k;
	double a[10005], mid, maxx=-1;
	int cut(double len)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			ans += int(a[i]/len);
		}
		return ans;
	}
	double binary(double l, double r)
	{
		if((r-l)<0.001) return r;
		mid = (l+r)/2.0;
		if(mid<0.01) return 0;
		if(cut(mid)>=k) return binary(mid, r);
		if(cut(mid)<k) return binary(l, mid);
		return mid;
	}
	int main()
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>maxx) maxx = a[i];
		}
		printf("%.2lf", floor(binary(0, maxx+0.01)*100)/100.0);
		return 0;
	}
}
int main()
{
	zhs::main();
}