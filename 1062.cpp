#include<iostream>
using namespace std;
int main()
{
	long long n, f[61]={0, 1, 1};
	for(int i=3;i<=60;i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	cin>>n;
	cout<<f[n-1];
	return 0;
}