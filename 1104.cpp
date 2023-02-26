#include<bits/stdc++.h>
using namespace std;
int n, maxx, pos=1, t;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(t>=maxx)
		{
			maxx = t;
			pos = i;
		}
	}
	cout<<maxx<<endl<<pos;
	return 0;
}