#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n = n*2-1;
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=i-1;j++)
		{
			cout<<' ';
		}
		for(;j<=n-i+1;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}