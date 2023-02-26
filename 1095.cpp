#include<bits/stdc++.h>
using namespace std;
int a[53], b[53];
int n, x, y;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		b[i] = i;
	}
	for(int i=1;i<=n;i++)
	{
		if(i<n-2)
		{
			a[b[i]] = i;
			x = b[i+1];
			y = b[i+2];
			for(int j=i+1;j<=n-2;j++)
			{
				b[j] = b[j+2];
			}
			b[n-1] = x;
			b[n] = y;
		}
		else a[b[i]] = i;
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	return 0;
}