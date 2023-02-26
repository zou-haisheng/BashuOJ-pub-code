#include<iostream>
using namespace std;
int m, n, x;
int main()
{
	cin>>m>>n>>x;
	while(x>0)
	{
		if(m%n==0) x -= m/n;
		else x = x-m/n-1;
		if(x<0) break;
		n += m/n;
	} 
	cout<<n;
	return 0; 
}