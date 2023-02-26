#include<cstdio>
#include<iostream>
using namespace std;
namespace zhs{
	double pow(double x, double y)
	{
		double prod=1;
		for(int i=1;i<=y;i++)
		{
			prod *= x;
		}
		return prod;
	}
	double f(double x)
	{
		return pow(x, 5)-15*pow(x, 4)+85*pow(x, 3)-225*pow(x, 2)+274*x-121;
	}
	double binary(double l, double r)
	{
		while((r-1)>=1e-1)
		{
			double mid = (l+r)/2.0;
			if(f(mid)==0) return mid;
			if(f(mid)<0) r = mid;
			else l = mid;
		}
		return (l+r)/2.0;
	}
	int main()
	{
	    printf("%.6lf", binary(1.5, 2.4));
	    return 0;
	}
}
int main()
{
	zhs::main();
}