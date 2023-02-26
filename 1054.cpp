#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	bool b;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(i==1) continue;
		b = true;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0) b = false;
		}
		if(b || i==2) cout<<i<<' ';
	}
	return 0;
}