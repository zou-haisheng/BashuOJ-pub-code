#include<bits/stdc++.h>
using namespace std;
int a, b;
bool t;
long long sum;
int main()
{
	cin>>a>>b;
	cout<<a<<'*'<<b<<'=';
	if(a%2)
	{
		cout<<b<<'+';
		sum += b;
	}
	while(true)
	{
		a /= 2;
		b *= 2;
		if(a%2==0) continue;
		if(a!=1) cout<<b<<'+';
		sum += b;
		if(a==1)
		{
			cout<<b;
			break;
		}
	}
	cout<<'='<<sum;
	return 0;
}