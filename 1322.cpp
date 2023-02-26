#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
namespace zhs{
	double a, b, c, d;
	const double eps = 1e-3;
	double f(double x)
	{
		return a*pow(x, 3) + b*pow(x, 2) + c*x + d;
	}
	double binary(double l, double r, bool flag)
	{
		while((r-l)>=eps)
		{
			double mid = (l+r)/2.0;
			if(f(mid)==0) return mid;
			if(f(mid)>0)
			{
				if(flag) r=mid;
				else l = mid;
			}
			else
			{
				if(flag) l = mid;
				else r = mid;
			}
		}
		return (l+r)/2.0;
	}
	int main()
	{
		cin>>a>>b>>c>>d;
		for(double i=-100;i<=100;i++)
		{
			if(f(i)==0)
			{
				printf("%.2lf ", i);
				continue;
			}
			if(i<=99 && f(i)*f(i+1)<0)
			{
				bool flag=(f(i)<0);
				printf("%.2lf ", binary(i+eps, i+1-eps, flag));
			}
		}
	}
}
int main()
{
	zhs::main();
}