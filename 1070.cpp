#include<iostream>
using namespace std;
int main()
{
	int n, a[101], ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n-1;i++)
	{
		if((a[i-1]<a[i] && a[i]>a[i+1]) || (a[i-1]>a[i] && a[i]<a[i+1]))
		{
			ans++;
		}
	}
	cout<<ans+1;
	return 0;
}