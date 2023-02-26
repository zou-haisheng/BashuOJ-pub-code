#include<bits/stdc++.h>
using namespace std;
int n;
int f(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return f(n-1) + f(n-2);
}

int main()
{
    cin>>n;
    cout<<f(n);
	return 0;
}