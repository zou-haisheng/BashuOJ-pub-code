#include<bits/stdc++.h>
using namespace std;
int n, ans=10000000;
float a, b;

int main()
{
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		cin>>a>>b;
		ans = min(ans, int(ceil(n/a)*b));
	}
	cout<<ans;
	return 0;
}