#include<bits/stdc++.h>
using namespace std;

int phi(int n, int q)
{
	if(n==1) return 1;
	if(q<=n/2) return n-n/2+phi(n/2,n/2+1-q);
	if(q>n/2) return phi(n-n/2,n+1-q);
}

int main()
{
	int n, q;
	cin>>n>>q;
	cout<<phi(n, q);
	return 0;
}