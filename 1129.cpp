#include<bits/stdc++.h>
using namespace std;
unsigned long long h[99]={1,1,2},s[6000],q,a,b,x;
unsigned long long w(unsigned long long a)
{
	if(a==0)
	{
		return 0;
	}
	for(int i=92;i>=1;i--)
	{
		if(h[i]<=a){
			x=h[i-1]+w(a-h[i]);
			return x;
		}
	}
}
int main()
{
	for(int i=3;i<=92;i++)
	{
		h[i]=h[i-1]+h[i-2];
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>a>>b;
		s[i]=w(b)-w(a-1);
	}
	for(int i=1;i<=q;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;
}