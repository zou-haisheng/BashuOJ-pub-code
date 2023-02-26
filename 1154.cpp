#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b=0,c=5,s=0,x,z;
	cin>>a;
	c = a;
	if(a==1)
	{
		cout<<1;
		return 0;
	}
	for(int i=0;i<a;i++)
	{
		b += i*i;
		c -= i;
		if(c<=0)
		{
			b = b + c*i;
			break;
		}
	}
	cout<<b;
	return 0;
}