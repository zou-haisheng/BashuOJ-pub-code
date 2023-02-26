#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double a[61]={}, x, y, z;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>z;
		a[i] = (x+y+z)/3;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%.2f ", a[i]);
	}
	return 0;
}