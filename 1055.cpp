#include<bits/stdc++.h>
using namespace std;\
int main()
{
	long long sum, n, ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum = 1;
		for(int j=1;j<=i;j++)
			sum *= j;
		ans += sum;
	}
	cout<<ans;
}