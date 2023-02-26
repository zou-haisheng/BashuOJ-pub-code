#include<bits/stdc++.h>
using namespace std;

int main()
{
	float t, sum=0, ma=0, mi=10;
	for(int i=1;i<=10;i++)
	{
		cin>>t;
		sum += t;
		ma = max(ma, t);
		mi = min(mi, t);
	}
	sum = sum - ma - mi;
	printf("%.2f", sum/8);
	return 0;
} 