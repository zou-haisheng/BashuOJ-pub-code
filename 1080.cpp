#include<bits/stdc++.h>
using namespace std;

int main()
{
	double k, n, x, y, ans=0;
	cin>>k>>n;
	cin>>x>>y;
	if(n>k) ans = k*x + (n-k)*y;
	else ans = n*x;
	printf("%.2f", ans);
	return 0;
}