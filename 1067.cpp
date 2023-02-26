#include<iostream>
using namespace std;

int main()
{
	int a[101], b, c, d=0, e=0;
	cin>>b;
	for(int i=0;i<b;i++) 
	{
		cin>>a[i];
	}
	cin>>c; 
	for(int p=0;p<b;p++) 
	{
		if(a[p]!=c && a[p]<c) 
		cout<<a[p]<<" "; 
		else
		{ 
			d = a[p];
			e = p;
			break;
		}
	}
	if(d==c)
	{
		for(int u=e+1;u<b;u++)
		cout<<a[u]<<" ";
	}
	else
	{
		cout<<c<<" ";
		for(int u=e;u<b;u++)
		{
			cout<<a[u]<<" ";
		}
	}
	return 0;
}