#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, ans=1, t;
	cin>>m>>n;
	t = max(n, m);
	while(true)
	{
		if(t%n==0 && t%m==0)
		{
			cout<<t;
			break;
		}
		t++;
	}
	return 0;
} 