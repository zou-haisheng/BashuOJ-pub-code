#include<bits/stdc++.h>
using namespace std;
int n, p, ans;
int main()
{
	cin>>n>>p;
	ans = p*2;
	for(int i=p+1;i<=n;i++)
	{
		ans += i;
	}
	cout<<ans;
	return 0;
}