#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[60], n, i;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	cin>>n;
	for(i=4;i<=n;i++)
	{
		a[i] = a[i-1]+a[i-2]+a[i-3];
	}
	cout<<a[n]<<endl;
}