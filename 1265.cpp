#include<bits/stdc++.h>
using namespace std;
int a[51], b[51];
int main()
{
	int x, y, z, sum=1;
	cin>>x>>y>>z;
	b[1] = 1;
	for(int i=x+1;i<=z+1;i++)
	{
		a[i] = b[i-x]*y;
		b[i] = a[i-2] + b[i-x];
		sum += a[i-2];
	}
	cout<<sum;
	return 0;
}