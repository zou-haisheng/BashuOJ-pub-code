#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a[11], sum=0;
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	for(int i=1;i<=10;i++)
	{
		if(n+30>=a[i]) sum++;
	}
	cout<<sum;
	return 0;
}