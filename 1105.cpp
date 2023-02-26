#include<bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) ans++;
	}
	cout<<ans;
	return 0;
}