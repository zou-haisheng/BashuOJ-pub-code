#include<bits/stdc++.h>
using namespace std;
int n, k, ans, temp;

int main()
{
	cin>>n>>k;
	temp = pow(n, k);
	for(int i=1;i<=temp;i++)
	{
		if(temp%i==0) ans += i;
	}
	cout<<ans;
	return 0;
}