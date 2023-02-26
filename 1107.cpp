#include<iostream>
using namespace std;
int a, b, c, d, m, n, x, y, z, f, r;
int main()
{
	cin>>a>>b>>c>>d;
	n = b*d;
	x = a*d+c*b;
	y = n;
	z = x;
	while(n!=0)
	{
		m = x%n;
		x = n;
		n = m;
	}
	f = z/x;
	r = y/x;
	if(f<r) cout<<f<<'/'<<r<<endl;
	if(f==r) cout<<1<<endl;
	if(f>r) cout<<f/r<<'+'<<f-r<<'/'<<r<<endl;
	return 0;
}