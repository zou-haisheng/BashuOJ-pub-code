#include<iostream>
using namespace std;
int n;
float x;
int main()
{
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		x += x*0.001;
	}
	cout<<x;
	return 0;
}