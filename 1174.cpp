#include<bits/stdc++.h>
using namespace std;
int l, r, ans=0;

int main() 
{
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		int tisigui=i;
		while(tisigui)
		{
			if(tisigui%10==2) ans++;
			tisigui/=10;
		}
	}
	cout<<ans;
	return 0;
}