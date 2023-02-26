#include<iostream>
using namespace std;
int main()
{
	int n, f[21]={0, 1, 2};
	for(int i=3;i<=20;i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	cin>>n;
	cout<<f[n];
	return 0;
}