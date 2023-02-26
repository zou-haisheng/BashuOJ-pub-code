#include<bits/stdc++.h>
using namespace std;
double a, b, c, m;

double f(double x, double y, double z)
{
	return max(x, max(y, z));
}

int main()
{
	cin>>a>>b>>c;
	m = f(a, b, c)/(f(a+b, b, c)*f(a, b, b+c));
	printf("%.3f", m);
	return 0;
}