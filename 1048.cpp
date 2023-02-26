#include<iostream>
using namespace std;
int n, j, y, t, temp;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		j+=temp;
		cin>>temp;
		y+=temp;
		cin>>temp;
		t+=temp;
	}
	cout<<j<<' '<<y<<' '<<t<<' '<<j+y+t;
	return 0;
}