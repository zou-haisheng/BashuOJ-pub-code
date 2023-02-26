#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n, ma=0, t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		ma = max(ma, t);
	}
	cout<<ma;
	return 0;
}