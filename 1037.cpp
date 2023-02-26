#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n, ma=0, mi=1000, t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		ma = max(ma, t);
		mi = min(mi, t);
	}
	cout<<ma-mi;
	return 0;
}