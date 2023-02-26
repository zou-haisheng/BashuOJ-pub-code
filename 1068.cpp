#include<iostream>
using namespace std;

int main()
{
	int n, a[1001], b[1001], sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum += a[i]*b[i];
	}
	cout<<sum;
	return 0;
}