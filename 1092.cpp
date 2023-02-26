#include<bits/stdc++.h>
using namespace std;
long long a[21][21];
int n;

int main()
{
	cin>>n;
	a[1][1] = a[2][1] = a[2][2] = 1;
	for(int i=3;i<20;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0; 
}